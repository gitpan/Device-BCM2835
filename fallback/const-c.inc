#define PERL_constant_NOTFOUND	1
#define PERL_constant_NOTDEF	2
#define PERL_constant_ISIV	3
#define PERL_constant_ISNO	4
#define PERL_constant_ISNV	5
#define PERL_constant_ISPV	6
#define PERL_constant_ISPVN	7
#define PERL_constant_ISSV	8
#define PERL_constant_ISUNDEF	9
#define PERL_constant_ISUV	10
#define PERL_constant_ISYES	11

#ifndef NVTYPE
typedef double NV; /* 5.6 and later define NVTYPE, and typedef NV to it.  */
#endif
#ifndef aTHX_
#define aTHX_ /* 5.6 or later define this for threading support.  */
#endif
#ifndef pTHX_
#define pTHX_ /* 5.6 or later define this for threading support.  */
#endif

static int
constant_14 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     BCM2835_GPCLR0 BCM2835_GPCLR1 BCM2835_GPEDS0 BCM2835_GPEDS1 BCM2835_GPFEN0
     BCM2835_GPFEN1 BCM2835_GPHEN0 BCM2835_GPHEN1 BCM2835_GPLEN0 BCM2835_GPLEN1
     BCM2835_GPLEV0 BCM2835_GPLEV1 BCM2835_GPREN0 BCM2835_GPREN1 BCM2835_GPSET0
     BCM2835_GPSET1 RPI_GPIO_P1_03 RPI_GPIO_P1_05 RPI_GPIO_P1_07 RPI_GPIO_P1_08
     RPI_GPIO_P1_10 RPI_GPIO_P1_11 RPI_GPIO_P1_12 RPI_GPIO_P1_13 RPI_GPIO_P1_15
     RPI_GPIO_P1_16 RPI_GPIO_P1_18 RPI_GPIO_P1_19 RPI_GPIO_P1_21 RPI_GPIO_P1_22
     RPI_GPIO_P1_23 RPI_GPIO_P1_24 RPI_GPIO_P1_26 */
  /* Offset 13 gives the best switch position.  */
  switch (name[13]) {
  case '0':
    if (memEQ(name, "BCM2835_GPCLR", 13)) {
    /*                            0      */
#ifdef BCM2835_GPCLR0
      *iv_return = BCM2835_GPCLR0;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "BCM2835_GPEDS", 13)) {
    /*                            0      */
#ifdef BCM2835_GPEDS0
      *iv_return = BCM2835_GPEDS0;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "BCM2835_GPFEN", 13)) {
    /*                            0      */
#ifdef BCM2835_GPFEN0
      *iv_return = BCM2835_GPFEN0;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "BCM2835_GPHEN", 13)) {
    /*                            0      */
#ifdef BCM2835_GPHEN0
      *iv_return = BCM2835_GPHEN0;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "BCM2835_GPLEN", 13)) {
    /*                            0      */
#ifdef BCM2835_GPLEN0
      *iv_return = BCM2835_GPLEN0;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "BCM2835_GPLEV", 13)) {
    /*                            0      */
#ifdef BCM2835_GPLEV0
      *iv_return = BCM2835_GPLEV0;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "BCM2835_GPREN", 13)) {
    /*                            0      */
#ifdef BCM2835_GPREN0
      *iv_return = BCM2835_GPREN0;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "BCM2835_GPSET", 13)) {
    /*                            0      */
#ifdef BCM2835_GPSET0
      *iv_return = BCM2835_GPSET0;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "RPI_GPIO_P1_1", 13)) {
    /*                            0      */
      *iv_return = RPI_GPIO_P1_10;
      return PERL_constant_ISIV;
    }
    break;
  case '1':
    if (memEQ(name, "BCM2835_GPCLR", 13)) {
    /*                            1      */
#ifdef BCM2835_GPCLR1
      *iv_return = BCM2835_GPCLR1;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "BCM2835_GPEDS", 13)) {
    /*                            1      */
#ifdef BCM2835_GPEDS1
      *iv_return = BCM2835_GPEDS1;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "BCM2835_GPFEN", 13)) {
    /*                            1      */
#ifdef BCM2835_GPFEN1
      *iv_return = BCM2835_GPFEN1;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "BCM2835_GPHEN", 13)) {
    /*                            1      */
#ifdef BCM2835_GPHEN1
      *iv_return = BCM2835_GPHEN1;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "BCM2835_GPLEN", 13)) {
    /*                            1      */
#ifdef BCM2835_GPLEN1
      *iv_return = BCM2835_GPLEN1;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "BCM2835_GPLEV", 13)) {
    /*                            1      */
#ifdef BCM2835_GPLEV1
      *iv_return = BCM2835_GPLEV1;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "BCM2835_GPREN", 13)) {
    /*                            1      */
#ifdef BCM2835_GPREN1
      *iv_return = BCM2835_GPREN1;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "BCM2835_GPSET", 13)) {
    /*                            1      */
#ifdef BCM2835_GPSET1
      *iv_return = BCM2835_GPSET1;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "RPI_GPIO_P1_1", 13)) {
    /*                            1      */
      *iv_return = RPI_GPIO_P1_11;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "RPI_GPIO_P1_2", 13)) {
    /*                            1      */
      *iv_return = RPI_GPIO_P1_21;
      return PERL_constant_ISIV;
    }
    break;
  case '2':
    if (memEQ(name, "RPI_GPIO_P1_1", 13)) {
    /*                            2      */
      *iv_return = RPI_GPIO_P1_12;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "RPI_GPIO_P1_2", 13)) {
    /*                            2      */
      *iv_return = RPI_GPIO_P1_22;
      return PERL_constant_ISIV;
    }
    break;
  case '3':
    if (memEQ(name, "RPI_GPIO_P1_0", 13)) {
    /*                            3      */
      *iv_return = RPI_GPIO_P1_03;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "RPI_GPIO_P1_1", 13)) {
    /*                            3      */
      *iv_return = RPI_GPIO_P1_13;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "RPI_GPIO_P1_2", 13)) {
    /*                            3      */
      *iv_return = RPI_GPIO_P1_23;
      return PERL_constant_ISIV;
    }
    break;
  case '4':
    if (memEQ(name, "RPI_GPIO_P1_2", 13)) {
    /*                            4      */
      *iv_return = RPI_GPIO_P1_24;
      return PERL_constant_ISIV;
    }
    break;
  case '5':
    if (memEQ(name, "RPI_GPIO_P1_0", 13)) {
    /*                            5      */
      *iv_return = RPI_GPIO_P1_05;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "RPI_GPIO_P1_1", 13)) {
    /*                            5      */
      *iv_return = RPI_GPIO_P1_15;
      return PERL_constant_ISIV;
    }
    break;
  case '6':
    if (memEQ(name, "RPI_GPIO_P1_1", 13)) {
    /*                            6      */
      *iv_return = RPI_GPIO_P1_16;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "RPI_GPIO_P1_2", 13)) {
    /*                            6      */
      *iv_return = RPI_GPIO_P1_26;
      return PERL_constant_ISIV;
    }
    break;
  case '7':
    if (memEQ(name, "RPI_GPIO_P1_0", 13)) {
    /*                            7      */
      *iv_return = RPI_GPIO_P1_07;
      return PERL_constant_ISIV;
    }
    break;
  case '8':
    if (memEQ(name, "RPI_GPIO_P1_0", 13)) {
    /*                            8      */
      *iv_return = RPI_GPIO_P1_08;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "RPI_GPIO_P1_1", 13)) {
    /*                            8      */
      *iv_return = RPI_GPIO_P1_18;
      return PERL_constant_ISIV;
    }
    break;
  case '9':
    if (memEQ(name, "RPI_GPIO_P1_1", 13)) {
    /*                            9      */
      *iv_return = RPI_GPIO_P1_19;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_15 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     BCM2835_GPAFEN0 BCM2835_GPAFEN1 BCM2835_GPAREN0 BCM2835_GPAREN1
     BCM2835_GPFSEL0 BCM2835_GPFSEL1 BCM2835_GPFSEL2 BCM2835_GPFSEL3
     BCM2835_GPFSEL4 BCM2835_GPFSEL5 */
  /* Offset 14 gives the best switch position.  */
  switch (name[14]) {
  case '0':
    if (memEQ(name, "BCM2835_GPAFEN", 14)) {
    /*                             0      */
#ifdef BCM2835_GPAFEN0
      *iv_return = BCM2835_GPAFEN0;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "BCM2835_GPAREN", 14)) {
    /*                             0      */
#ifdef BCM2835_GPAREN0
      *iv_return = BCM2835_GPAREN0;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "BCM2835_GPFSEL", 14)) {
    /*                             0      */
#ifdef BCM2835_GPFSEL0
      *iv_return = BCM2835_GPFSEL0;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '1':
    if (memEQ(name, "BCM2835_GPAFEN", 14)) {
    /*                             1      */
#ifdef BCM2835_GPAFEN1
      *iv_return = BCM2835_GPAFEN1;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "BCM2835_GPAREN", 14)) {
    /*                             1      */
#ifdef BCM2835_GPAREN1
      *iv_return = BCM2835_GPAREN1;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "BCM2835_GPFSEL", 14)) {
    /*                             1      */
#ifdef BCM2835_GPFSEL1
      *iv_return = BCM2835_GPFSEL1;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '2':
    if (memEQ(name, "BCM2835_GPFSEL", 14)) {
    /*                             2      */
#ifdef BCM2835_GPFSEL2
      *iv_return = BCM2835_GPFSEL2;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '3':
    if (memEQ(name, "BCM2835_GPFSEL", 14)) {
    /*                             3      */
#ifdef BCM2835_GPFSEL3
      *iv_return = BCM2835_GPFSEL3;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '4':
    if (memEQ(name, "BCM2835_GPFSEL", 14)) {
    /*                             4      */
#ifdef BCM2835_GPFSEL4
      *iv_return = BCM2835_GPFSEL4;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '5':
    if (memEQ(name, "BCM2835_GPFSEL", 14)) {
    /*                             5      */
#ifdef BCM2835_GPFSEL5
      *iv_return = BCM2835_GPFSEL5;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_17 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     BCM2835_GPIO_BASE BCM2835_GPIO_PADS BCM2835_GPPUDCLK0 BCM2835_GPPUDCLK1
     BCM2835_PAGE_SIZE BCM2835_PERI_BASE BCM2835_PWM0_DATA BCM2835_PWM1_DATA */
  /* Offset 11 gives the best switch position.  */
  switch (name[11]) {
  case '0':
    if (memEQ(name, "BCM2835_PWM0_DATA", 17)) {
    /*                          ^            */
#ifdef BCM2835_PWM0_DATA
      *iv_return = BCM2835_PWM0_DATA;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '1':
    if (memEQ(name, "BCM2835_PWM1_DATA", 17)) {
    /*                          ^            */
#ifdef BCM2835_PWM1_DATA
      *iv_return = BCM2835_PWM1_DATA;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "BCM2835_PAGE_SIZE", 17)) {
    /*                          ^            */
#ifdef BCM2835_PAGE_SIZE
      *iv_return = BCM2835_PAGE_SIZE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "BCM2835_PERI_BASE", 17)) {
    /*                          ^            */
#ifdef BCM2835_PERI_BASE
      *iv_return = BCM2835_PERI_BASE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "BCM2835_GPIO_BASE", 17)) {
    /*                          ^            */
#ifdef BCM2835_GPIO_BASE
      *iv_return = BCM2835_GPIO_BASE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "BCM2835_GPIO_PADS", 17)) {
    /*                          ^            */
#ifdef BCM2835_GPIO_PADS
      *iv_return = BCM2835_GPIO_PADS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "BCM2835_GPPUDCLK0", 17)) {
    /*                          ^            */
#ifdef BCM2835_GPPUDCLK0
      *iv_return = BCM2835_GPPUDCLK0;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "BCM2835_GPPUDCLK1", 17)) {
    /*                          ^            */
#ifdef BCM2835_GPPUDCLK1
      *iv_return = BCM2835_GPPUDCLK1;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_18 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     BCM2835_BLOCK_SIZE BCM2835_CLOCK_BASE BCM2835_PWM0_RANGE
     BCM2835_PWM1_RANGE BCM2835_PWMCLK_DIV BCM2835_PWM_STATUS */
  /* Offset 15 gives the best switch position.  */
  switch (name[15]) {
  case 'A':
    if (memEQ(name, "BCM2835_CLOCK_BASE", 18)) {
    /*                              ^         */
#ifdef BCM2835_CLOCK_BASE
      *iv_return = BCM2835_CLOCK_BASE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "BCM2835_PWMCLK_DIV", 18)) {
    /*                              ^         */
#ifdef BCM2835_PWMCLK_DIV
      *iv_return = BCM2835_PWMCLK_DIV;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "BCM2835_BLOCK_SIZE", 18)) {
    /*                              ^         */
#ifdef BCM2835_BLOCK_SIZE
      *iv_return = BCM2835_BLOCK_SIZE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "BCM2835_PWM0_RANGE", 18)) {
    /*                              ^         */
#ifdef BCM2835_PWM0_RANGE
      *iv_return = BCM2835_PWM0_RANGE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "BCM2835_PWM1_RANGE", 18)) {
    /*                              ^         */
#ifdef BCM2835_PWM1_RANGE
      *iv_return = BCM2835_PWM1_RANGE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "BCM2835_PWM_STATUS", 18)) {
    /*                              ^         */
#ifdef BCM2835_PWM_STATUS
      *iv_return = BCM2835_PWM_STATUS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_19 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     BCM2835_GPIO_PUD_UP BCM2835_PWM0_ENABLE BCM2835_PWM0_SERIAL
     BCM2835_PWM1_ENABLE BCM2835_PWM1_SERIAL BCM2835_PWMCLK_CNTL
     BCM2835_PWM_CONTROL */
  /* Offset 13 gives the best switch position.  */
  switch (name[13]) {
  case 'E':
    if (memEQ(name, "BCM2835_PWM0_ENABLE", 19)) {
    /*                            ^            */
#ifdef BCM2835_PWM0_ENABLE
      *iv_return = BCM2835_PWM0_ENABLE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "BCM2835_PWM1_ENABLE", 19)) {
    /*                            ^            */
#ifdef BCM2835_PWM1_ENABLE
      *iv_return = BCM2835_PWM1_ENABLE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'K':
    if (memEQ(name, "BCM2835_PWMCLK_CNTL", 19)) {
    /*                            ^            */
#ifdef BCM2835_PWMCLK_CNTL
      *iv_return = BCM2835_PWMCLK_CNTL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "BCM2835_PWM_CONTROL", 19)) {
    /*                            ^            */
#ifdef BCM2835_PWM_CONTROL
      *iv_return = BCM2835_PWM_CONTROL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "BCM2835_GPIO_PUD_UP", 19)) {
    /*                            ^            */
      *iv_return = BCM2835_GPIO_PUD_UP;
      return PERL_constant_ISIV;
    }
    break;
  case 'S':
    if (memEQ(name, "BCM2835_PWM0_SERIAL", 19)) {
    /*                            ^            */
#ifdef BCM2835_PWM0_SERIAL
      *iv_return = BCM2835_PWM0_SERIAL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "BCM2835_PWM1_SERIAL", 19)) {
    /*                            ^            */
#ifdef BCM2835_PWM1_SERIAL
      *iv_return = BCM2835_PWM1_SERIAL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_20 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     BCM2835_GPIO_PUD_OFF BCM2835_PWM0_MS_MODE BCM2835_PWM0_USEFIFO
     BCM2835_PWM1_MS_MODE BCM2835_PWM1_USEFIFO */
  /* Offset 13 gives the best switch position.  */
  switch (name[13]) {
  case 'M':
    if (memEQ(name, "BCM2835_PWM0_MS_MODE", 20)) {
    /*                            ^             */
#ifdef BCM2835_PWM0_MS_MODE
      *iv_return = BCM2835_PWM0_MS_MODE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "BCM2835_PWM1_MS_MODE", 20)) {
    /*                            ^             */
#ifdef BCM2835_PWM1_MS_MODE
      *iv_return = BCM2835_PWM1_MS_MODE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "BCM2835_GPIO_PUD_OFF", 20)) {
    /*                            ^             */
      *iv_return = BCM2835_GPIO_PUD_OFF;
      return PERL_constant_ISIV;
    }
    break;
  case 'U':
    if (memEQ(name, "BCM2835_PWM0_USEFIFO", 20)) {
    /*                            ^             */
#ifdef BCM2835_PWM0_USEFIFO
      *iv_return = BCM2835_PWM0_USEFIFO;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "BCM2835_PWM1_USEFIFO", 20)) {
    /*                            ^             */
#ifdef BCM2835_PWM1_USEFIFO
      *iv_return = BCM2835_PWM1_USEFIFO;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_21 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     BCM2835_GPIO_PUD_DOWN BCM2835_PAD_DRIVE_2mA BCM2835_PAD_DRIVE_4mA
     BCM2835_PAD_DRIVE_6mA BCM2835_PAD_DRIVE_8mA BCM2835_PWM0_OFFSTATE
     BCM2835_PWM0_REPEATFF BCM2835_PWM0_REVPOLAR BCM2835_PWM1_OFFSTATE
     BCM2835_PWM1_REPEATFF BCM2835_PWM1_REVPOLAR */
  /* Offset 18 gives the best switch position.  */
  switch (name[18]) {
  case '2':
    if (memEQ(name, "BCM2835_PAD_DRIVE_2mA", 21)) {
    /*                                 ^         */
#ifdef BCM2835_PAD_DRIVE_2mA
      *iv_return = BCM2835_PAD_DRIVE_2mA;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '4':
    if (memEQ(name, "BCM2835_PAD_DRIVE_4mA", 21)) {
    /*                                 ^         */
#ifdef BCM2835_PAD_DRIVE_4mA
      *iv_return = BCM2835_PAD_DRIVE_4mA;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '6':
    if (memEQ(name, "BCM2835_PAD_DRIVE_6mA", 21)) {
    /*                                 ^         */
#ifdef BCM2835_PAD_DRIVE_6mA
      *iv_return = BCM2835_PAD_DRIVE_6mA;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '8':
    if (memEQ(name, "BCM2835_PAD_DRIVE_8mA", 21)) {
    /*                                 ^         */
#ifdef BCM2835_PAD_DRIVE_8mA
      *iv_return = BCM2835_PAD_DRIVE_8mA;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'A':
    if (memEQ(name, "BCM2835_PWM0_OFFSTATE", 21)) {
    /*                                 ^         */
#ifdef BCM2835_PWM0_OFFSTATE
      *iv_return = BCM2835_PWM0_OFFSTATE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "BCM2835_PWM1_OFFSTATE", 21)) {
    /*                                 ^         */
#ifdef BCM2835_PWM1_OFFSTATE
      *iv_return = BCM2835_PWM1_OFFSTATE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "BCM2835_PWM0_REVPOLAR", 21)) {
    /*                                 ^         */
#ifdef BCM2835_PWM0_REVPOLAR
      *iv_return = BCM2835_PWM0_REVPOLAR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "BCM2835_PWM1_REVPOLAR", 21)) {
    /*                                 ^         */
#ifdef BCM2835_PWM1_REVPOLAR
      *iv_return = BCM2835_PWM1_REVPOLAR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "BCM2835_GPIO_PUD_DOWN", 21)) {
    /*                                 ^         */
      *iv_return = BCM2835_GPIO_PUD_DOWN;
      return PERL_constant_ISIV;
    }
    break;
  case 'T':
    if (memEQ(name, "BCM2835_PWM0_REPEATFF", 21)) {
    /*                                 ^         */
#ifdef BCM2835_PWM0_REPEATFF
      *iv_return = BCM2835_PWM0_REPEATFF;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "BCM2835_PWM1_REPEATFF", 21)) {
    /*                                 ^         */
#ifdef BCM2835_PWM1_REPEATFF
      *iv_return = BCM2835_PWM1_REPEATFF;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_22 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     BCM2835_GPIO_FSEL_ALT0 BCM2835_GPIO_FSEL_ALT1 BCM2835_GPIO_FSEL_ALT2
     BCM2835_GPIO_FSEL_ALT3 BCM2835_GPIO_FSEL_ALT4 BCM2835_GPIO_FSEL_ALT5
     BCM2835_GPIO_FSEL_INPT BCM2835_GPIO_FSEL_MASK BCM2835_GPIO_FSEL_OUTP
     BCM2835_PADS_GPIO_0_27 BCM2835_PAD_DRIVE_10mA BCM2835_PAD_DRIVE_12mA
     BCM2835_PAD_DRIVE_14mA BCM2835_PAD_DRIVE_16mA */
  /* Offset 21 gives the best switch position.  */
  switch (name[21]) {
  case '0':
    if (memEQ(name, "BCM2835_GPIO_FSEL_ALT", 21)) {
    /*                                    0      */
      *iv_return = BCM2835_GPIO_FSEL_ALT0;
      return PERL_constant_ISIV;
    }
    break;
  case '1':
    if (memEQ(name, "BCM2835_GPIO_FSEL_ALT", 21)) {
    /*                                    1      */
      *iv_return = BCM2835_GPIO_FSEL_ALT1;
      return PERL_constant_ISIV;
    }
    break;
  case '2':
    if (memEQ(name, "BCM2835_GPIO_FSEL_ALT", 21)) {
    /*                                    2      */
      *iv_return = BCM2835_GPIO_FSEL_ALT2;
      return PERL_constant_ISIV;
    }
    break;
  case '3':
    if (memEQ(name, "BCM2835_GPIO_FSEL_ALT", 21)) {
    /*                                    3      */
      *iv_return = BCM2835_GPIO_FSEL_ALT3;
      return PERL_constant_ISIV;
    }
    break;
  case '4':
    if (memEQ(name, "BCM2835_GPIO_FSEL_ALT", 21)) {
    /*                                    4      */
      *iv_return = BCM2835_GPIO_FSEL_ALT4;
      return PERL_constant_ISIV;
    }
    break;
  case '5':
    if (memEQ(name, "BCM2835_GPIO_FSEL_ALT", 21)) {
    /*                                    5      */
      *iv_return = BCM2835_GPIO_FSEL_ALT5;
      return PERL_constant_ISIV;
    }
    break;
  case '7':
    if (memEQ(name, "BCM2835_PADS_GPIO_0_2", 21)) {
    /*                                    7      */
#ifdef BCM2835_PADS_GPIO_0_27
      *iv_return = BCM2835_PADS_GPIO_0_27;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'A':
    if (memEQ(name, "BCM2835_PAD_DRIVE_10m", 21)) {
    /*                                    A      */
#ifdef BCM2835_PAD_DRIVE_10mA
      *iv_return = BCM2835_PAD_DRIVE_10mA;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "BCM2835_PAD_DRIVE_12m", 21)) {
    /*                                    A      */
#ifdef BCM2835_PAD_DRIVE_12mA
      *iv_return = BCM2835_PAD_DRIVE_12mA;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "BCM2835_PAD_DRIVE_14m", 21)) {
    /*                                    A      */
#ifdef BCM2835_PAD_DRIVE_14mA
      *iv_return = BCM2835_PAD_DRIVE_14mA;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "BCM2835_PAD_DRIVE_16m", 21)) {
    /*                                    A      */
#ifdef BCM2835_PAD_DRIVE_16mA
      *iv_return = BCM2835_PAD_DRIVE_16mA;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'K':
    if (memEQ(name, "BCM2835_GPIO_FSEL_MAS", 21)) {
    /*                                    K      */
#ifdef BCM2835_GPIO_FSEL_MASK
      *iv_return = BCM2835_GPIO_FSEL_MASK;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "BCM2835_GPIO_FSEL_OUT", 21)) {
    /*                                    P      */
      *iv_return = BCM2835_GPIO_FSEL_OUTP;
      return PERL_constant_ISIV;
    }
    break;
  case 'T':
    if (memEQ(name, "BCM2835_GPIO_FSEL_INP", 21)) {
    /*                                    T      */
      *iv_return = BCM2835_GPIO_FSEL_INPT;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant (pTHX_ const char *name, STRLEN len, IV *iv_return) {
  /* Initially switch on the length of the name.  */
  /* When generated this function returned values for the list of names given
     in this section of perl code.  Rather than manually editing these functions
     to add or remove constants, which would result in this comment and section
     of code becoming inaccurate, we recommend that you edit this section of
     code, and use it to regenerate a new set of constant functions which you
     then use to replace the originals.

     Regenerate these constant functions by feeding this entire source file to
     perl -x

#!/usr/bin/perl -w
use ExtUtils::Constant qw (constant_types C_constant XS_constant);

my $types = {map {($_, 1)} qw(IV)};
my @names = (qw(BCM2835_BLOCK_SIZE BCM2835_CLOCK_BASE BCM2835_GPAFEN0
	       BCM2835_GPAFEN1 BCM2835_GPAREN0 BCM2835_GPAREN1 BCM2835_GPCLR0
	       BCM2835_GPCLR1 BCM2835_GPEDS0 BCM2835_GPEDS1 BCM2835_GPFEN0
	       BCM2835_GPFEN1 BCM2835_GPFSEL0 BCM2835_GPFSEL1 BCM2835_GPFSEL2
	       BCM2835_GPFSEL3 BCM2835_GPFSEL4 BCM2835_GPFSEL5 BCM2835_GPHEN0
	       BCM2835_GPHEN1 BCM2835_GPIO_BASE BCM2835_GPIO_FSEL_MASK
	       BCM2835_GPIO_PADS BCM2835_GPIO_PWM BCM2835_GPLEN0 BCM2835_GPLEN1
	       BCM2835_GPLEV0 BCM2835_GPLEV1 BCM2835_GPPUD BCM2835_GPPUDCLK0
	       BCM2835_GPPUDCLK1 BCM2835_GPREN0 BCM2835_GPREN1 BCM2835_GPSET0
	       BCM2835_GPSET1 BCM2835_PADS_GPIO_0_27 BCM2835_PADS_GPIO_28_45
	       BCM2835_PADS_GPIO_46_53 BCM2835_PAD_DRIVE_10mA
	       BCM2835_PAD_DRIVE_12mA BCM2835_PAD_DRIVE_14mA
	       BCM2835_PAD_DRIVE_16mA BCM2835_PAD_DRIVE_2mA
	       BCM2835_PAD_DRIVE_4mA BCM2835_PAD_DRIVE_6mA
	       BCM2835_PAD_DRIVE_8mA BCM2835_PAD_HYSTERESIS_ENABLED
	       BCM2835_PAD_SLEW_RATE_UNLIMITED BCM2835_PAGE_SIZE
	       BCM2835_PERI_BASE BCM2835_PWM0_DATA BCM2835_PWM0_ENABLE
	       BCM2835_PWM0_MS_MODE BCM2835_PWM0_OFFSTATE BCM2835_PWM0_RANGE
	       BCM2835_PWM0_REPEATFF BCM2835_PWM0_REVPOLAR BCM2835_PWM0_SERIAL
	       BCM2835_PWM0_USEFIFO BCM2835_PWM1_DATA BCM2835_PWM1_ENABLE
	       BCM2835_PWM1_MS_MODE BCM2835_PWM1_OFFSTATE BCM2835_PWM1_RANGE
	       BCM2835_PWM1_REPEATFF BCM2835_PWM1_REVPOLAR BCM2835_PWM1_SERIAL
	       BCM2835_PWM1_USEFIFO BCM2835_PWMCLK_CNTL BCM2835_PWMCLK_DIV
	       BCM2835_PWM_CONTROL BCM2835_PWM_STATUS HIGH LOW),
            {name=>"BCM2835_GPIO_FSEL_ALT0", type=>"IV", macro=>"1"},
            {name=>"BCM2835_GPIO_FSEL_ALT1", type=>"IV", macro=>"1"},
            {name=>"BCM2835_GPIO_FSEL_ALT2", type=>"IV", macro=>"1"},
            {name=>"BCM2835_GPIO_FSEL_ALT3", type=>"IV", macro=>"1"},
            {name=>"BCM2835_GPIO_FSEL_ALT4", type=>"IV", macro=>"1"},
            {name=>"BCM2835_GPIO_FSEL_ALT5", type=>"IV", macro=>"1"},
            {name=>"BCM2835_GPIO_FSEL_INPT", type=>"IV", macro=>"1"},
            {name=>"BCM2835_GPIO_FSEL_OUTP", type=>"IV", macro=>"1"},
            {name=>"BCM2835_GPIO_PUD_DOWN", type=>"IV", macro=>"1"},
            {name=>"BCM2835_GPIO_PUD_OFF", type=>"IV", macro=>"1"},
            {name=>"BCM2835_GPIO_PUD_UP", type=>"IV", macro=>"1"},
            {name=>"BCM2835_PAD_GROUP_GPIO_0_27", type=>"IV", macro=>"1"},
            {name=>"BCM2835_PAD_GROUP_GPIO_28_45", type=>"IV", macro=>"1"},
            {name=>"BCM2835_PAD_GROUP_GPIO_46_53", type=>"IV", macro=>"1"},
            {name=>"RPI_GPIO_P1_03", type=>"IV", macro=>"1"},
            {name=>"RPI_GPIO_P1_05", type=>"IV", macro=>"1"},
            {name=>"RPI_GPIO_P1_07", type=>"IV", macro=>"1"},
            {name=>"RPI_GPIO_P1_08", type=>"IV", macro=>"1"},
            {name=>"RPI_GPIO_P1_10", type=>"IV", macro=>"1"},
            {name=>"RPI_GPIO_P1_11", type=>"IV", macro=>"1"},
            {name=>"RPI_GPIO_P1_12", type=>"IV", macro=>"1"},
            {name=>"RPI_GPIO_P1_13", type=>"IV", macro=>"1"},
            {name=>"RPI_GPIO_P1_15", type=>"IV", macro=>"1"},
            {name=>"RPI_GPIO_P1_16", type=>"IV", macro=>"1"},
            {name=>"RPI_GPIO_P1_18", type=>"IV", macro=>"1"},
            {name=>"RPI_GPIO_P1_19", type=>"IV", macro=>"1"},
            {name=>"RPI_GPIO_P1_21", type=>"IV", macro=>"1"},
            {name=>"RPI_GPIO_P1_22", type=>"IV", macro=>"1"},
            {name=>"RPI_GPIO_P1_23", type=>"IV", macro=>"1"},
            {name=>"RPI_GPIO_P1_24", type=>"IV", macro=>"1"},
            {name=>"RPI_GPIO_P1_26", type=>"IV", macro=>"1"});

print constant_types(), "\n"; # macro defs
foreach (C_constant ("Device::BCM2835", 'constant', 'IV', $types, undef, 3, @names) ) {
    print $_, "\n"; # C constant subs
}
print "\n#### XS Section:\n";
print XS_constant ("Device::BCM2835", $types);
__END__
   */

  switch (len) {
  case 3:
    if (memEQ(name, "LOW", 3)) {
#ifdef LOW
      *iv_return = LOW;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 4:
    if (memEQ(name, "HIGH", 4)) {
#ifdef HIGH
      *iv_return = HIGH;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 13:
    if (memEQ(name, "BCM2835_GPPUD", 13)) {
#ifdef BCM2835_GPPUD
      *iv_return = BCM2835_GPPUD;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 14:
    return constant_14 (aTHX_ name, iv_return);
    break;
  case 15:
    return constant_15 (aTHX_ name, iv_return);
    break;
  case 16:
    if (memEQ(name, "BCM2835_GPIO_PWM", 16)) {
#ifdef BCM2835_GPIO_PWM
      *iv_return = BCM2835_GPIO_PWM;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 17:
    return constant_17 (aTHX_ name, iv_return);
    break;
  case 18:
    return constant_18 (aTHX_ name, iv_return);
    break;
  case 19:
    return constant_19 (aTHX_ name, iv_return);
    break;
  case 20:
    return constant_20 (aTHX_ name, iv_return);
    break;
  case 21:
    return constant_21 (aTHX_ name, iv_return);
    break;
  case 22:
    return constant_22 (aTHX_ name, iv_return);
    break;
  case 23:
    /* Names all of length 23.  */
    /* BCM2835_PADS_GPIO_28_45 BCM2835_PADS_GPIO_46_53 */
    /* Offset 21 gives the best switch position.  */
    switch (name[21]) {
    case '4':
      if (memEQ(name, "BCM2835_PADS_GPIO_28_45", 23)) {
      /*                                    ^        */
#ifdef BCM2835_PADS_GPIO_28_45
        *iv_return = BCM2835_PADS_GPIO_28_45;
        return PERL_constant_ISIV;
#else
        return PERL_constant_NOTDEF;
#endif
      }
      break;
    case '5':
      if (memEQ(name, "BCM2835_PADS_GPIO_46_53", 23)) {
      /*                                    ^        */
#ifdef BCM2835_PADS_GPIO_46_53
        *iv_return = BCM2835_PADS_GPIO_46_53;
        return PERL_constant_ISIV;
#else
        return PERL_constant_NOTDEF;
#endif
      }
      break;
    }
    break;
  case 27:
    if (memEQ(name, "BCM2835_PAD_GROUP_GPIO_0_27", 27)) {
      *iv_return = BCM2835_PAD_GROUP_GPIO_0_27;
      return PERL_constant_ISIV;
    }
    break;
  case 28:
    /* Names all of length 28.  */
    /* BCM2835_PAD_GROUP_GPIO_28_45 BCM2835_PAD_GROUP_GPIO_46_53 */
    /* Offset 26 gives the best switch position.  */
    switch (name[26]) {
    case '4':
      if (memEQ(name, "BCM2835_PAD_GROUP_GPIO_28_45", 28)) {
      /*                                         ^        */
        *iv_return = BCM2835_PAD_GROUP_GPIO_28_45;
        return PERL_constant_ISIV;
      }
      break;
    case '5':
      if (memEQ(name, "BCM2835_PAD_GROUP_GPIO_46_53", 28)) {
      /*                                         ^        */
        *iv_return = BCM2835_PAD_GROUP_GPIO_46_53;
        return PERL_constant_ISIV;
      }
      break;
    }
    break;
  case 30:
    if (memEQ(name, "BCM2835_PAD_HYSTERESIS_ENABLED", 30)) {
#ifdef BCM2835_PAD_HYSTERESIS_ENABLED
      *iv_return = BCM2835_PAD_HYSTERESIS_ENABLED;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 31:
    if (memEQ(name, "BCM2835_PAD_SLEW_RATE_UNLIMITED", 31)) {
#ifdef BCM2835_PAD_SLEW_RATE_UNLIMITED
      *iv_return = BCM2835_PAD_SLEW_RATE_UNLIMITED;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

