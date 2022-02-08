#ifndef _OS_CONSOLE_H_
#define _OS_CONSOLE_H_

/* console_t */
typedef struct console
{
	unsigned int current_start_addr; /* ��ǰ��ʾ����ʲôλ��	  */
	unsigned int original_addr;		 /* ��ǰ����̨��Ӧ�Դ�λ�� */
	unsigned int v_mem_limit;		 /* ��ǰ����̨ռ���Դ��С */
	unsigned int cursor;			 /* ��ǰ���λ�� */
} console_t;


#define SCR_UP		1	/* scroll forward */
#define SCR_DN		-1	/* scroll backward */

#define SCR_SIZE  (80 * 25)
#define SCR_WIDTH 80

#define DEFAULT_CHAR_COLOR (MAKE_COLOR(BLACK, WHITE))
#define GRAY_CHAR		   (MAKE_COLOR(BLACK, BLACK) | BRIGHT)
#define RED_CHAR		   (MAKE_COLOR(BLUE, RED) | BRIGHT)

#endif /* _OS_CONSOLE_H_ */
