# Before `make install' is performed this script should be runnable with
# `make test'. After `make install' it should work as `perl Device-BCM2835.t'

#########################

# change 'tests => 2' to 'tests => last_test_to_print';

use strict;
use warnings;

use Test::More tests => 5;
BEGIN { use_ok('Device::BCM2835') };


my $fail = 0;
foreach my $constname (qw(
	BCM2835_BLOCK_SIZE BCM2835_CLOCK_BASE BCM2835_GPAFEN0 BCM2835_GPAFEN1
	BCM2835_GPAREN0 BCM2835_GPAREN1 BCM2835_GPCLR0 BCM2835_GPCLR1
	BCM2835_GPEDS0 BCM2835_GPEDS1 BCM2835_GPFEN0 BCM2835_GPFEN1
	BCM2835_GPFSEL0 BCM2835_GPFSEL1 BCM2835_GPFSEL2 BCM2835_GPFSEL3
	BCM2835_GPFSEL4 BCM2835_GPFSEL5 BCM2835_GPHEN0 BCM2835_GPHEN1
	BCM2835_GPIO_BASE BCM2835_GPIO_FSEL_ALT0 BCM2835_GPIO_FSEL_ALT1
	BCM2835_GPIO_FSEL_ALT2 BCM2835_GPIO_FSEL_ALT3 BCM2835_GPIO_FSEL_ALT4
	BCM2835_GPIO_FSEL_ALT5 BCM2835_GPIO_FSEL_INPT BCM2835_GPIO_FSEL_MASK
	BCM2835_GPIO_FSEL_OUTP BCM2835_GPIO_PADS BCM2835_GPIO_PUD_DOWN
	BCM2835_GPIO_PUD_OFF BCM2835_GPIO_PUD_UP BCM2835_GPIO_PWM
	BCM2835_GPLEN0 BCM2835_GPLEN1 BCM2835_GPLEV0 BCM2835_GPLEV1
	BCM2835_GPPUD BCM2835_GPPUDCLK0 BCM2835_GPPUDCLK1 BCM2835_GPREN0
	BCM2835_GPREN1 BCM2835_GPSET0 BCM2835_GPSET1 BCM2835_PADS_GPIO_0_27
	BCM2835_PADS_GPIO_28_45 BCM2835_PADS_GPIO_46_53 BCM2835_PAD_DRIVE_10mA
	BCM2835_PAD_DRIVE_12mA BCM2835_PAD_DRIVE_14mA BCM2835_PAD_DRIVE_16mA
	BCM2835_PAD_DRIVE_2mA BCM2835_PAD_DRIVE_4mA BCM2835_PAD_DRIVE_6mA
	BCM2835_PAD_DRIVE_8mA BCM2835_PAD_GROUP_GPIO_0_27
	BCM2835_PAD_GROUP_GPIO_28_45 BCM2835_PAD_GROUP_GPIO_46_53
	BCM2835_PAD_HYSTERESIS_ENABLED BCM2835_PAD_SLEW_RATE_UNLIMITED
	BCM2835_PAGE_SIZE BCM2835_PERI_BASE BCM2835_PWM0_DATA
	BCM2835_PWM0_ENABLE BCM2835_PWM0_MS_MODE BCM2835_PWM0_OFFSTATE
	BCM2835_PWM0_RANGE BCM2835_PWM0_REPEATFF BCM2835_PWM0_REVPOLAR
	BCM2835_PWM0_SERIAL BCM2835_PWM0_USEFIFO BCM2835_PWM1_DATA
	BCM2835_PWM1_ENABLE BCM2835_PWM1_MS_MODE BCM2835_PWM1_OFFSTATE
	BCM2835_PWM1_RANGE BCM2835_PWM1_REPEATFF BCM2835_PWM1_REVPOLAR
	BCM2835_PWM1_SERIAL BCM2835_PWM1_USEFIFO BCM2835_PWMCLK_CNTL
	BCM2835_PWMCLK_DIV BCM2835_PWM_CONTROL BCM2835_PWM_STATUS HIGH LOW
	RPI_GPIO_P1_03 RPI_GPIO_P1_05 RPI_GPIO_P1_07 RPI_GPIO_P1_08
	RPI_GPIO_P1_10 RPI_GPIO_P1_11 RPI_GPIO_P1_12 RPI_GPIO_P1_13
	RPI_GPIO_P1_15 RPI_GPIO_P1_16 RPI_GPIO_P1_18 RPI_GPIO_P1_19
	RPI_GPIO_P1_21 RPI_GPIO_P1_22 RPI_GPIO_P1_23 RPI_GPIO_P1_24
	RPI_GPIO_P1_26)) {
  next if (eval "my \$a = $constname; 1");
  if ($@ =~ /^Your vendor has not defined Device::BCM2835 macro $constname/) {
    print "# pass: $@";
  } else {
    print "# fail: $@";
    $fail = 1;
  }

}

ok( $fail == 0 , 'Constants' );
#########################

# Insert your test code below, the Test::More module is use()ed here so read
# its man page ( perldoc Test::More ) for help writing this test script.

#
# Library management
#

# Dont actually do any IO and dont open kernel memory:
Device::BCM2835::set_debug(1);

ok(Device::BCM2835::init());

#
# Low level register access
#

ok(Device::BCM2835::peri_read(&Device::BCM2835::BCM2835_GPIO_BASE + &Device::BCM2835::BCM2835_GPFSEL1) == 0);

Device::BCM2835::peri_write(&Device::BCM2835::BCM2835_GPIO_BASE + &Device::BCM2835::BCM2835_GPFSEL2, 0xdeadbeef);

Device::BCM2835::peri_set_bits(&Device::BCM2835::BCM2835_GPIO_BASE + &Device::BCM2835::BCM2835_GPFSEL3, 0xdeadbeef, 0x1f);

#
# GPIO register access
#
Device::BCM2835::gpio_fsel(&Device::BCM2835::RPI_GPIO_P1_11, &Device::BCM2835::BCM2835_GPIO_FSEL_OUTP);

Device::BCM2835::gpio_set(&Device::BCM2835::RPI_GPIO_P1_11);

Device::BCM2835::gpio_clr(&Device::BCM2835::RPI_GPIO_P1_11);

Device::BCM2835::gpio_lev(&Device::BCM2835::RPI_GPIO_P1_11);

Device::BCM2835::gpio_eds(&Device::BCM2835::RPI_GPIO_P1_11);

Device::BCM2835::gpio_set_eds(&Device::BCM2835::RPI_GPIO_P1_11);

Device::BCM2835::gpio_ren(&Device::BCM2835::RPI_GPIO_P1_11);

Device::BCM2835::gpio_fen(&Device::BCM2835::RPI_GPIO_P1_11);

Device::BCM2835::gpio_hen(&Device::BCM2835::RPI_GPIO_P1_11);

Device::BCM2835::gpio_len(&Device::BCM2835::RPI_GPIO_P1_11);

Device::BCM2835::gpio_aren(&Device::BCM2835::RPI_GPIO_P1_11);

Device::BCM2835::gpio_afen(&Device::BCM2835::RPI_GPIO_P1_11);

Device::BCM2835::gpio_pud(&Device::BCM2835::BCM2835_GPIO_PUD_OFF);

Device::BCM2835::gpio_pudclk(&Device::BCM2835::RPI_GPIO_P1_11, 1);

ok(Device::BCM2835::gpio_pad(&Device::BCM2835::BCM2835_PAD_GROUP_GPIO_0_27) == 0);

Device::BCM2835::gpio_set_pad(&Device::BCM2835::BCM2835_PAD_GROUP_GPIO_0_27, &Device::BCM2835::BCM2835_PAD_HYSTERESIS_ENABLED | &Device::BCM2835::BCM2835_PAD_DRIVE_10mA);

Device::BCM2835::delay(10);
# Causes problem is run as an ordinary user:
#Device::BCM2835::delayMicroseconds(10);
Device::BCM2835::gpio_write(&Device::BCM2835::RPI_GPIO_P1_11, 1);

# Causes problem is run as an ordinary user:
#Device::BCM2835::gpio_set_pud(&Device::BCM2835::RPI_GPIO_P1_11, &Device::BCM2835::BCM2835_GPIO_PUD_UP);

Device::BCM2835::spi_begin();
Device::BCM2835::spi_end();







