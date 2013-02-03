/*
 * Copyright (c) W.E.C工作室
 * All right Resvered
 *
 * Des:关于位结构体操作
 *
 * Author:权浩泽
 * CreatTime:2013/02/03
 *
 * Rversion:V1.0.0
 */

#ifndef __BIT_20130203_QUANHAOZE_H
#define __BIT_20130203_QUANHAOZE_H


/*
 * 获取缓冲区bit中处于pos位置的位的状态，左边是0
 * 返回状态是0或者1
 */
int bit_get(const unsigned char *bits,int pos);

/*
 * 设置缓冲区中处于位置pos位的状态(根据state值来设置).缓冲区左边位置是0。状态值必须为0或者1
 */
void bit_set(unsigned char *bits,int pos,int state);

/*
 * 按位来计算bit1和bit2的前size位的异或值，最后将结果放到bitx的缓冲区中。
 */
void bit_xor(const unsigned char *bit1,const unsigned char *bit2,unsigned char *bitx,int size);

/*
 * 轮转缓冲区bits(含size位),将位值向左移count位。
 * 此操作完成后，处于缓冲区最左端的count位移动到缓冲区的最右端，
 * 而且其他的位也相应轮转
 */

void bit_rot_left(unsigned char *bits,int size,int count);
/*
* 轮转缓冲区bits(含size位),将位值向右移count位。
* 此操作完成后，处于缓冲区最右端的count位移动到缓冲区的最左端，
* 而且其他的位也相应轮转
*/
void bit_rot_right(unsigned char *bits,int size,int count);

#endif
