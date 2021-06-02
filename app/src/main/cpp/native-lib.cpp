#include <jni.h>
#include <string>

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