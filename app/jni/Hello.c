//
// Created by Administrator on 2017/6/22 0022.
//
#include <stdio.h>
#include <stdlib.h>
#include <jni.h>


/**
*
JNIEnv* env:里面有很多方法
jobject job:谁调用了这个方法就是谁的实例
当前就是JNI.thi
*/
jstring Java_cn_eagleview_ljr_ndkdemo_JNI_sayHello(JNIEnv* env, jobject jobj){

//jstring     (*NewStringUTF)(JNIEnv*, const char*);
    char* text = "I am from c";
    return (*env)->NewStringUTF(env, text);
}
