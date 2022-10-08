#include <jni.h>


extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_vmtest3_MainActivity_mainthread(JNIEnv *env, jobject thiz) {
    // TODO: implement mainthread()
}
extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_vmtest3_MainActivity_SMCdetection(JNIEnv *env, jobject thiz) {
    // TODO: implement SMCdetection()
}
extern "C"
JNIEXPORT jint JNICALL
Java_com_example_vmtest3_MainActivity_qemuBkpt(JNIEnv *env, jobject thiz) {
    // TODO: implement qemuBkpt()
}