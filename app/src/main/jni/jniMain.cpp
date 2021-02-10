//
// Created by 박시온 on 2/9/21.
//

#include "jniMain.h"
#include <com_icandothisallday2021_testjni_MainActivity.h>
JNIEXPORT jstring JNICALL java_com_icandothisallday2021_MainActivity_getJNIString(JNIEnv *env, jobject obj) {
    return env->NewStringUTF("Message from jniMain");
}

