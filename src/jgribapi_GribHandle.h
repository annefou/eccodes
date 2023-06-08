/*
 * (C) Copyright 2005- ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 *
 * In applying this licence, ECMWF does not waive the privileges and immunities granted to it by
 * virtue of its status as an intergovernmental organisation nor does it submit to any jurisdiction.
 */

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class jgribapi_GribHandle */

#ifndef _Included_jgribapi_GribHandle
#define _Included_jgribapi_GribHandle
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     jgribapi_GribHandle
 * Method:    getIteratorID
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_jgribapi_GribHandle_getIteratorID(JNIEnv*, jobject, jlong);

/*
 * Class:     jgribapi_GribHandle
 * Method:    gribGetString
 * Signature: (JLjava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_jgribapi_GribHandle_gribGetString(JNIEnv*, jobject, jlong, jstring);

/*
 * Class:     jgribapi_GribHandle
 * Method:    gribGetLong
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_jgribapi_GribHandle_gribGetLong(JNIEnv*, jobject, jlong, jstring);

/*
 * Class:     jgribapi_GribHandle
 * Method:    gribGetDouble
 * Signature: (JLjava/lang/String;)D
 */
JNIEXPORT jdouble JNICALL Java_jgribapi_GribHandle_gribGetDouble(JNIEnv*, jobject, jlong, jstring);

/*
 * Class:     jgribapi_GribHandle
 * Method:    gribGetLongArray
 * Signature: (JLjava/lang/String;)[J
 */
JNIEXPORT jlongArray JNICALL Java_jgribapi_GribHandle_gribGetLongArray(JNIEnv*, jobject, jlong, jstring);

/*
 * Class:     jgribapi_GribHandle
 * Method:    gribGetDoubleArray
 * Signature: (JLjava/lang/String;)[D
 */
JNIEXPORT jdoubleArray JNICALL Java_jgribapi_GribHandle_gribGetDoubleArray(JNIEnv*, jobject, jlong, jstring);

/*
 * Class:     jgribapi_GribHandle
 * Method:    gribSetString
 * Signature: (JLjava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_jgribapi_GribHandle_gribSetString(JNIEnv*, jobject, jlong, jstring, jstring);

/*
 * Class:     jgribapi_GribHandle
 * Method:    gribCreateNext
 * Signature: (J)Ljgribapi/GribKey;
 */
JNIEXPORT jobject JNICALL Java_jgribapi_GribHandle_gribCreateNext(JNIEnv*, jobject, jlong);

/*
 * Class:     jgribapi_GribHandle
 * Method:    gribSetSearch
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_jgribapi_GribHandle_gribSetSearch(JNIEnv*, jobject, jlong, jstring);

/*
 * Class:     jgribapi_GribHandle
 * Method:    gribSetLong
 * Signature: (JLjava/lang/String;J)I
 */
JNIEXPORT jint JNICALL Java_jgribapi_GribHandle_gribSetLong(JNIEnv*, jobject, jlong, jstring, jlong);

/*
 * Class:     jgribapi_GribHandle
 * Method:    gribSetDouble
 * Signature: (JLjava/lang/String;D)I
 */
JNIEXPORT jint JNICALL Java_jgribapi_GribHandle_gribSetDouble(JNIEnv*, jobject, jlong, jstring, jdouble);

/*
 * Class:     jgribapi_GribHandle
 * Method:    gribSetLongArray
 * Signature: (JLjava/lang/String;[J)I
 */
JNIEXPORT jint JNICALL Java_jgribapi_GribHandle_gribSetLongArray(JNIEnv*, jobject, jlong, jstring, jlongArray);

/*
 * Class:     jgribapi_GribHandle
 * Method:    gribSetDoubleArray
 * Signature: (JLjava/lang/String;[D)I
 */
JNIEXPORT jint JNICALL Java_jgribapi_GribHandle_gribSetDoubleArray(JNIEnv*, jobject, jlong, jstring, jdoubleArray);

/*
 * Class:     jgribapi_GribHandle
 * Method:    gribGetXml
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_jgribapi_GribHandle_gribGetXml__J(JNIEnv*, jobject, jlong);

/*
 * Class:     jgribapi_GribHandle
 * Method:    gribGetXml
 * Signature: (JLjava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_jgribapi_GribHandle_gribGetXml__JLjava_lang_String_2(JNIEnv*, jobject, jlong, jstring);

/*
 * Class:     jgribapi_GribHandle
 * Method:    gribGetAscii
 * Signature: (JLjava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_jgribapi_GribHandle_gribGetAscii(JNIEnv*, jobject, jlong, jstring);

/*
 * Class:     jgribapi_GribHandle
 * Method:    gribGetBytes
 * Signature: (JLjava/lang/String;)[B
 */
JNIEXPORT jbyteArray JNICALL Java_jgribapi_GribHandle_gribGetBytes(JNIEnv*, jobject, jlong, jstring);

/*
 * Class:     jgribapi_GribHandle
 * Method:    gribDeleteHandle
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_jgribapi_GribHandle_gribDeleteHandle(JNIEnv*, jobject, jlong);

/*
 * Class:     jgribapi_GribHandle
 * Method:    gribResetHandle
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_jgribapi_GribHandle_gribResetHandle(JNIEnv*, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
