/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_apache_accumulo_server_tabletserver_NativeMap */

#ifndef _Included_org_apache_accumulo_server_tabletserver_NativeMap
#define _Included_org_apache_accumulo_server_tabletserver_NativeMap
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_apache_accumulo_server_tabletserver_NativeMap
 * Method:    createNM
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_apache_accumulo_server_tabletserver_NativeMap_createNM
  (JNIEnv *, jclass);

/*
 * Class:     org_apache_accumulo_server_tabletserver_NativeMap
 * Method:    singleUpdate
 * Signature: (J[B[B[B[BJZ[BI)V
 */
JNIEXPORT void JNICALL Java_org_apache_accumulo_server_tabletserver_NativeMap_singleUpdate
  (JNIEnv *, jclass, jlong, jbyteArray, jbyteArray, jbyteArray, jbyteArray, jlong, jboolean, jbyteArray, jint);

/*
 * Class:     org_apache_accumulo_server_tabletserver_NativeMap
 * Method:    startUpdate
 * Signature: (J[B)J
 */
JNIEXPORT jlong JNICALL Java_org_apache_accumulo_server_tabletserver_NativeMap_startUpdate
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     org_apache_accumulo_server_tabletserver_NativeMap
 * Method:    update
 * Signature: (JJ[B[B[BJZ[BI)V
 */
JNIEXPORT void JNICALL Java_org_apache_accumulo_server_tabletserver_NativeMap_update
  (JNIEnv *, jclass, jlong, jlong, jbyteArray, jbyteArray, jbyteArray, jlong, jboolean, jbyteArray, jint);

/*
 * Class:     org_apache_accumulo_server_tabletserver_NativeMap
 * Method:    sizeNM
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_apache_accumulo_server_tabletserver_NativeMap_sizeNM
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_apache_accumulo_server_tabletserver_NativeMap
 * Method:    memoryUsedNM
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_apache_accumulo_server_tabletserver_NativeMap_memoryUsedNM
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_apache_accumulo_server_tabletserver_NativeMap
 * Method:    deleteNM
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_apache_accumulo_server_tabletserver_NativeMap_deleteNM
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_apache_accumulo_server_tabletserver_NativeMap
 * Method:    createNMI
 * Signature: (J[I)J
 */
JNIEXPORT jlong JNICALL Java_org_apache_accumulo_server_tabletserver_NativeMap_createNMI__J_3I
  (JNIEnv *, jclass, jlong, jintArray);

/*
 * Class:     org_apache_accumulo_server_tabletserver_NativeMap
 * Method:    createNMI
 * Signature: (J[B[B[B[BJZ[I)J
 */
JNIEXPORT jlong JNICALL Java_org_apache_accumulo_server_tabletserver_NativeMap_createNMI__J_3B_3B_3B_3BJZ_3I
  (JNIEnv *, jclass, jlong, jbyteArray, jbyteArray, jbyteArray, jbyteArray, jlong, jboolean, jintArray);

/*
 * Class:     org_apache_accumulo_server_tabletserver_NativeMap
 * Method:    nmiNext
 * Signature: (J[I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_apache_accumulo_server_tabletserver_NativeMap_nmiNext
  (JNIEnv *, jclass, jlong, jintArray);

/*
 * Class:     org_apache_accumulo_server_tabletserver_NativeMap
 * Method:    nmiGetData
 * Signature: (J[B[B[B[B[B)V
 */
JNIEXPORT void JNICALL Java_org_apache_accumulo_server_tabletserver_NativeMap_nmiGetData
  (JNIEnv *, jclass, jlong, jbyteArray, jbyteArray, jbyteArray, jbyteArray, jbyteArray);

/*
 * Class:     org_apache_accumulo_server_tabletserver_NativeMap
 * Method:    nmiGetTS
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_apache_accumulo_server_tabletserver_NativeMap_nmiGetTS
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_apache_accumulo_server_tabletserver_NativeMap
 * Method:    deleteNMI
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_apache_accumulo_server_tabletserver_NativeMap_deleteNMI
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif