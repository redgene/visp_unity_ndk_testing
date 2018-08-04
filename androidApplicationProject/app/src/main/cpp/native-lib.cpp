#include <jni.h>
#include <string>

// Link following functions C-style (required for plugins)
extern "C"
{
    // The functions we will call from Unity.

    const char* PrintHello() {
        return "Hello";
    }

    int PrintANumber() {
        return 5;
    }

    int AddTwoIntegers(int a, int b) {
        return a + b;
    }

    float AddTwoFloats(float a, float b) {
        return a + b;
    }

} // end of export C block


/*
#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring

JNICALL
Java_com_example_winmac_myapplication_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject ) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
*/