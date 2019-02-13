#ifndef SEESAW_DEVICE_CONFIG_H
#define SEESAW_DEVICE_CONFIG_H

#define PRODUCT_CODE 3957

//override default activity led pin
#define PIN_ACTIVITY_LED 12 // was PB22 now PA12

//don't use address pins
#define CONFIG_NO_ADDR

//don't use eeprom
#define CONFIG_NO_EEPROM

// USB to UART
#define USB_UART_DMA

#define CONFIG_USB_UART_DMA_CHANNEL_TX 1
#define CONFIG_USB_UART_DMA_CHANNEL_RX 0

#define CONFIG_USB_UART_DMA_TRIGGER_RX SERCOM5_DMAC_ID_RX
#define CONFIG_USB_UART_DMA_TRIGGER_TX SERCOM5_DMAC_ID_TX

#define CONFIG_USB_UART_SERCOM SERCOM5

//* ============== POOL SIZES =================== *//
#define EVT_SIZE_SMALL 32
#define EVT_SIZE_MEDIUM 64
#define EVT_SIZE_LARGE 256
#define EVT_COUNT_SMALL 128
#define EVT_COUNT_MEDIUM 32
#define EVT_COUNT_LARGE 16

//* ============== ADC =================== *//
#define CONFIG_ADC 1

//we will override some of the default ADC pins for this board
#define CONFIG_ADC_INPUT_0 1
#define CONFIG_ADC_INPUT_0_PIN (32 + 2) //PB02 - SIGNAL_01

#define CONFIG_ADC_INPUT_1 1
#define CONFIG_ADC_INPUT_1_PIN (32 + 3) //PB03 - SIGNAL_02

#define CONFIG_ADC_INPUT_2 0
#define CONFIG_ADC_INPUT_2_PIN 2 //PA02 - SIGNAL_09

#define CONFIG_ADC_INPUT_3 0
#define CONFIG_ADC_INPUT_3_PIN 3 //PA03 - SIGNAL_10

#define CONFIG_ADC_INPUT_4 0 // not used
//#define CONFIG_ADC_INPUT_4_PIN (32 + 8) //PB08 - SIGNAL_03

#define CONFIG_ADC_INPUT_5 0 // not used
//#define CONFIG_ADC_INPUT_5_PIN (32 + 9) //PB09 - SIGNAL_04

#define CONFIG_ADC_INPUT_6 0 // not used

#define CONFIG_ADC_INPUT_7 0 // not used

//* ============== DAC =================== *//
#define CONFIG_DAC 0

//* ============== TOUCH =================== *//
#define CONFIG_TOUCH 1

#ifndef ENABLE_LOGGING
#define CONFIG_TOUCH0 1 //this is the UART log pin
#endif
#define CONFIG_TOUCH1 1
#define CONFIG_TOUCH2 1
#define CONFIG_TOUCH3 1

//* ============== TIMER =================== *//
#define CONFIG_TIMER 1

// SERVOs 1 to 8 (in order) - TCC
#define CONFIG_TIMER_PWM_OUT0 1
#define CONFIG_TIMER_PWM_OUT0_IS_TCC
#define CONFIG_TIMER_PWM_OUT0_TC NOT_ON_TC
#define CONFIG_TIMER_PWM_OUT0_TCC TCC0
#define CONFIG_TIMER_PWM_OUT0_WO 4
#define CONFIG_TIMER_PWM_OUT0_PIN (32 + 10) //PB10

#define CONFIG_TIMER_PWM_OUT1 1
#define CONFIG_TIMER_PWM_OUT1_IS_TCC
#define CONFIG_TIMER_PWM_OUT1_TC NOT_ON_TC
#define CONFIG_TIMER_PWM_OUT1_TCC TCC0
#define CONFIG_TIMER_PWM_OUT1_WO 5
#define CONFIG_TIMER_PWM_OUT1_PIN (32 + 11) //PB11

#define CONFIG_TIMER_PWM_OUT2 1
#define CONFIG_TIMER_PWM_OUT2_IS_TCC
#define CONFIG_TIMER_PWM_OUT2_TC NOT_ON_TC
#define CONFIG_TIMER_PWM_OUT2_TCC TCC0
#define CONFIG_TIMER_PWM_OUT2_WO 6
#define CONFIG_TIMER_PWM_OUT2_PIN 20

#define CONFIG_TIMER_PWM_OUT3 1
#define CONFIG_TIMER_PWM_OUT3_IS_TCC
#define CONFIG_TIMER_PWM_OUT3_TC NOT_ON_TC
#define CONFIG_TIMER_PWM_OUT3_TCC TCC0
#define CONFIG_TIMER_PWM_OUT3_WO 7
#define CONFIG_TIMER_PWM_OUT3_PIN 21

#define CONFIG_TIMER_PWM_OUT4 1
#define CONFIG_TIMER_PWM_OUT4_IS_TCC
#define CONFIG_TIMER_PWM_OUT4_TC NOT_ON_TC
#define CONFIG_TIMER_PWM_OUT4_TCC TCC1
#define CONFIG_TIMER_PWM_OUT4_WO 0
#define CONFIG_TIMER_PWM_OUT4_PIN 10

#define CONFIG_TIMER_PWM_OUT5 1
#define CONFIG_TIMER_PWM_OUT5_IS_TCC
#define CONFIG_TIMER_PWM_OUT5_TC NOT_ON_TC
#define CONFIG_TIMER_PWM_OUT5_TCC TCC1
#define CONFIG_TIMER_PWM_OUT5_WO 1
#define CONFIG_TIMER_PWM_OUT5_PIN 11

#define CONFIG_TIMER_PWM_OUT6 1
#define CONFIG_TIMER_PWM_OUT6_IS_TCC
#define CONFIG_TIMER_PWM_OUT6_TC NOT_ON_TC
#define CONFIG_TIMER_PWM_OUT6_TCC TCC2
#define CONFIG_TIMER_PWM_OUT6_WO 0
#define CONFIG_TIMER_PWM_OUT6_PIN 16

#define CONFIG_TIMER_PWM_OUT7 1
#define CONFIG_TIMER_PWM_OUT7_IS_TCC
#define CONFIG_TIMER_PWM_OUT7_TC NOT_ON_TC
#define CONFIG_TIMER_PWM_OUT7_TCC TCC2
#define CONFIG_TIMER_PWM_OUT7_WO 1
#define CONFIG_TIMER_PWM_OUT7_PIN 17

// SIGNAL PWM - TC
#define CONFIG_TIMER_PWM_OUT8 1
#define CONFIG_TIMER_PWM_OUT8_TC TC4
#define CONFIG_TIMER_PWM_OUT8_TCC NOT_ON_TCC
#define CONFIG_TIMER_PWM_OUT8_WO 0
#define CONFIG_TIMER_PWM_OUT8_PIN (32 + 8) //PB08 - SIGNAL_03

#define CONFIG_TIMER_PWM_OUT9 1
#define CONFIG_TIMER_PWM_OUT9_TC TC4
#define CONFIG_TIMER_PWM_OUT9_TCC NOT_ON_TCC
#define CONFIG_TIMER_PWM_OUT9_WO 1
#define CONFIG_TIMER_PWM_OUT9_PIN (32 + 9) //PB09 - SIGNAL_04

#define CONFIG_TIMER_PWM_OUT10 1
#define CONFIG_TIMER_PWM_OUT10_TC TC3
#define CONFIG_TIMER_PWM_OUT10_TCC NOT_ON_TCC
#define CONFIG_TIMER_PWM_OUT10_WO 1
#define CONFIG_TIMER_PWM_OUT10_PIN 15 //PA15 - SIGNAL_05

#define CONFIG_TIMER_PWM_OUT11 1
#define CONFIG_TIMER_PWM_OUT11_TC TC3
#define CONFIG_TIMER_PWM_OUT11_TCC NOT_ON_TCC
#define CONFIG_TIMER_PWM_OUT11_WO 0
#define CONFIG_TIMER_PWM_OUT11_PIN 18 //PA18 - SIGNAL_06

//* ============== INTERRUPT =================== *//
#define CONFIG_INTERRUPT 0
//#define CONFIG_INTERRUPT_PIN 8

//* ============== I2C SLAVE =================== *//
#define CONFIG_I2C_SLAVE 1
//override the default pins
#define CONFIG_I2C_SLAVE_PIN_SDA 22
#define CONFIG_I2C_SLAVE_PIN_SCL 23

//override default address
#define CONFIG_I2C_SLAVE_ADDR 0x49

//override default mux
#define CONFIG_I2C_SLAVE_MUX 3

#define CONFIG_I2C_SLAVE_FLOW_CONTROL 1

//* ============== SERCOM =================== *//
#define CONFIG_SERCOM0 0
#define CONFIG_SERCOM1 0
#define CONFIG_SERCOM2 0

//These are only available on samd21
#define CONFIG_SERCOM3 0
#define CONFIG_SERCOM4 0
#define CONFIG_SERCOM5 1

#define CONFIG_SERCOM_UART_PIN_RX (32 + 23) //PB23
#define CONFIG_SERCOM_UART_PIN_TX (32 + 22) //PB22
#define CONFIG_SERCOM_UART_PAD_TX UART_TX_PAD_2
#define CONFIG_SERCOM_UART_PAD_RX SERCOM_RX_PAD_3
#define CONFIG_SERCOM_UART_BAUD_RATE 115200
#define CONFIG_SERCOM_UART_MUX_TX 3
#define CONFIG_SERCOM_UART_MUX_RX 3

//* ============== DAP =================== *//
#define CONFIG_DAP 0

//* =========== NEOPIXEL ================ *//
#define CONFIG_NEOPIXEL 1
#define CONFIG_NEOPIXEL_BUF_MAX 1024

//* =========== POWER SENSE ================ *//
#define CONFIG_POWER_SENSE 0

//* =========== USB ================ *//
#define CONFIG_USB 1

#define USB_VID 0x0005
#define USB_PID 0x0007

#define USB_PRODUCT "Robotics Masters MM1 HAT"

#endif
