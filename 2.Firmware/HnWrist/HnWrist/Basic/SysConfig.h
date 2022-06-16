#ifndef __SYSCONFIG_H
#define __SYSCONFIG_H

#define WX_NAME             "HnWrist"     //�ֱ�����
#define WX_HARDWARE_VERSION "v2.0"       //Ӳ���汾
#define WX_SOFTWARE_VERSION "v1.0"       //����汾

/*��Ļ*/
#define TFT_CS_Pin  PA4     //Ƭѡ
#define TFT_DC_Pin  PA8     //����/����ѡ��
#define TFT_RST_Pin PA12     //��λ
#define TFT_BLK_Pin PA10    //����

/*ָʾ��*/
#define LED_Pin     PC13

/*��Դ����(ONLY Watch Max)*/
#define POWER_ON_Pin PB15    //��Դ����
#define POWER_EN_Pin PA11    //��Դʹ��

/*����*/
#define KEY_UP_Pin   PB0    //�ϼ�
#define KEY_OK_Pin   PB1    //ѡ���
#define KEY_DOWN_Pin PB2    //�¼�

/*��ؼ��*/
#define BAT_DET_Pin PB3     //��ѹ���
#define BAT_CHG_Pin PA15    //�����

/*�˶�������*/
#define IMU_SCL_Pin PB7     //I2Cʱ��
#define IMU_SDA_Pin PB6     //I2C����
#define IMU_INT_Pin PB5     //�жϽ�

/*��ѹ��*/
#define BMP_SCL_Pin PB8     //I2Cʱ��
#define BMP_SDA_Pin PB9     //I2C����

/*�����ʹ�õĶ�ʱ��*/
#define STOPWATCH_TIM TIM2

#endif
