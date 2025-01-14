/** 
 *****************************Copyright (c) 2023  ZJU****************************
 * @file      : gps.cpp
 * @brief     : gps设备驱动文件
 * @history   :
 *  Version     Date            Author          Note
 *  V1.0.0    2023-08-12        Hao Lion        1. <note>
 *******************************************************************************
 * @verbatim :
 *==============================================================================
 *                                                                              
 *                                                                              
 *==============================================================================
 * @endverbatim :
 *****************************Copyright (c) 2023  ZJU****************************
 */


#include "gps/gps.hpp"




/**
 * @brief gps基类的构造函数，初始化gps_data
 * @retval none
*/
GPS::GPS(){
    memset(&gps_data,0,sizeof(gps_data_t));
}