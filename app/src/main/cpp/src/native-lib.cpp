#include <jni.h>
#include <string>

//#include <boost/thread.hpp>
//#include "../include/ysos.h"

bool stop_flag = false;

extern "C" JNIEXPORT jstring JNICALL
Java_com_yunshen_test_1sdk_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
extern "C" JNIEXPORT jstring JNICALL
Java_com_yunshen_test_1sdk_MainActivity_startYsosFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++ \n";

    int ret = -1;

    printf("==========start service [check] ============\n");
    //TODO: first-  init ysoslog config and create all init log files
//    int ret = theApp.InitInstance();
    printf("[********]mian[********][theApp.InitInstance()][ret][%d]\n", ret);
    hello = hello + "-------------" +std::to_string(ret);
    //TODO: second- auto run all services
    if(!ret){
        printf("[********]mian[********][theApp.InitInstance()][fail][ret][%d]\n", ret);
    } else {
        printf("[********]mian[********][theApp.InitInstance()][success][ret][%d]\n", ret);
    }
    //boost::this_thread::sleep(boost::posix_time::seconds(2));

    /*
    ret = theApp.OnAutoRun();
    hello = hello + "-------------" +std::to_string(ret);
    if(0 != ret) {
        printf("[********]mian[********][theApp.OnAutoRun()][fail][ret][%d]\n", ret);
    } else {
        printf("[********]mian[********][theApp.OnAutoRun()][success][ret][%d]\n", ret);
        //signal(SIGTERM, signal_callback_handler);
        //  01.先运行该Link, 睡眠约50秒://NOLINT
        while (!stop_flag) {
            // boost::thread::sleep(boost::get_system_time() + boost::posix_time::seconds(65000));
            boost::this_thread::sleep_for(boost::chrono::seconds(1000));
        }
        //TODO: exit app
        ret = theApp.ExitInstance();
        hello = hello + "-------------" +std::to_string(ret);
    }
    */
    printf("==========start service [enter] ============\n");


    return env->NewStringUTF(hello.c_str());
}
extern "C" JNIEXPORT jstring JNICALL
Java_com_yunshen_test_1sdk_MainActivity_stopYsosFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++ \n";
    //int ret = theApp.ExitInstance();
    //hello = hello + std::to_string(ret);
    return env->NewStringUTF(hello.c_str());
}