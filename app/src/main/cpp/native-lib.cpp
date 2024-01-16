#include <jni.h>

extern "C"
JNIEXPORT jstring  JNICALL
Java_com_bn_ndkapplication_FirstFragment_00024keys_APIKey(JNIEnv *env, jobject thiz) {
    return env ->NewStringUTF("NDHD313213N3211"); //MY API KEY
}