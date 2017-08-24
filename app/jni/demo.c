//
// Created by Administrator on 2017/6/22 0022.
//

#include <jni.h>
jstring Java_cn_eagleview_ljr_ndkdemo_MainActivity_getStrFromJNI(JNIEnv *env,jobject thiz) {
    return (*env)->NewStringUTF(env, "I`m Str from jni libs!");
}