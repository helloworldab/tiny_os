
#ifndef _OS_TTY_H_
#define _OS_TTY_H_

#include "type.h"
#include "console.h"

#define TTY_IN_BYTES 256 /* tty input queue size */

/* TTY */
typedef struct tty
{
	u32 in_buf[TTY_IN_BYTES]; /* TTY ���뻺���� */
	u32 *p_inbuf_head;		  /* ָ�򻺳�������һ������λ�� */
	u32 *p_inbuf_tail;		  /* ָ���������Ӧ����ļ�ֵ */
	int inbuf_count;		  /* ���������Ѿ�����˶��� */

	console_t *p_console;
} tty_t;

#endif /* _OS_TTY_H_ */