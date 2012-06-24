package Device::BCM2835;

use 5.008005;
use strict;
use warnings;
use Carp;

require Exporter;
use AutoLoader;

our @ISA = qw(Exporter);

# Items to export into callers namespace by default. Note: do not export
# names by default without a very good reason. Use EXPORT_OK instead.
# Do not simply export all your public functions/methods/constants.

# This allows declaration	use Device::BCM2835 ':all';
# If you do not need this, moving things directly into @EXPORT or @EXPORT_OK
# will save memory.
our %EXPORT_TAGS = ( 'all' => [ qw(
	BCM2835_BLOCK_SIZE
	BCM2835_CLOCK_BASE
	BCM2835_GPAFEN0
	BCM2835_GPAFEN1
	BCM2835_GPAREN0
	BCM2835_GPAREN1
	BCM2835_GPCLR0
	BCM2835_GPCLR1
	BCM2835_GPEDS0
	BCM2835_GPEDS1
	BCM2835_GPFEN0
	BCM2835_GPFEN1
	BCM2835_GPFSEL0
	BCM2835_GPFSEL1
	BCM2835_GPFSEL2
	BCM2835_GPFSEL3
	BCM2835_GPFSEL4
	BCM2835_GPFSEL5
	BCM2835_GPHEN0
	BCM2835_GPHEN1
	BCM2835_GPIO_BASE
	BCM2835_GPIO_FSEL_ALT0
	BCM2835_GPIO_FSEL_ALT1
	BCM2835_GPIO_FSEL_ALT2
	BCM2835_GPIO_FSEL_ALT3
	BCM2835_GPIO_FSEL_ALT4
	BCM2835_GPIO_FSEL_ALT5
	BCM2835_GPIO_FSEL_INPT
	BCM2835_GPIO_FSEL_MASK
	BCM2835_GPIO_FSEL_OUTP
	BCM2835_GPIO_PADS
	BCM2835_GPIO_PUD_DOWN
	BCM2835_GPIO_PUD_OFF
	BCM2835_GPIO_PUD_UP
	BCM2835_GPIO_PWM
	BCM2835_GPLEN0
	BCM2835_GPLEN1
	BCM2835_GPLEV0
	BCM2835_GPLEV1
	BCM2835_GPPUD
	BCM2835_GPPUDCLK0
	BCM2835_GPPUDCLK1
	BCM2835_GPREN0
	BCM2835_GPREN1
	BCM2835_GPSET0
	BCM2835_GPSET1
	BCM2835_PADS_GPIO_0_27
	BCM2835_PADS_GPIO_28_45
	BCM2835_PADS_GPIO_46_53
	BCM2835_PAD_DRIVE_10mA
	BCM2835_PAD_DRIVE_12mA
	BCM2835_PAD_DRIVE_14mA
	BCM2835_PAD_DRIVE_16mA
	BCM2835_PAD_DRIVE_2mA
	BCM2835_PAD_DRIVE_4mA
	BCM2835_PAD_DRIVE_6mA
	BCM2835_PAD_DRIVE_8mA
	BCM2835_PAD_GROUP_GPIO_0_27
	BCM2835_PAD_GROUP_GPIO_28_45
	BCM2835_PAD_GROUP_GPIO_46_53
	BCM2835_PAD_HYSTERESIS_ENABLED
	BCM2835_PAD_SLEW_RATE_UNLIMITED
	BCM2835_PAGE_SIZE
	BCM2835_PERI_BASE
	BCM2835_PWM0_DATA
	BCM2835_PWM0_ENABLE
	BCM2835_PWM0_MS_MODE
	BCM2835_PWM0_OFFSTATE
	BCM2835_PWM0_RANGE
	BCM2835_PWM0_REPEATFF
	BCM2835_PWM0_REVPOLAR
	BCM2835_PWM0_SERIAL
	BCM2835_PWM0_USEFIFO
	BCM2835_PWM1_DATA
	BCM2835_PWM1_ENABLE
	BCM2835_PWM1_MS_MODE
	BCM2835_PWM1_OFFSTATE
	BCM2835_PWM1_RANGE
	BCM2835_PWM1_REPEATFF
	BCM2835_PWM1_REVPOLAR
	BCM2835_PWM1_SERIAL
	BCM2835_PWM1_USEFIFO
	BCM2835_PWMCLK_CNTL
	BCM2835_PWMCLK_DIV
	BCM2835_PWM_CONTROL
	BCM2835_PWM_STATUS
	HIGH
	LOW
	RPI_GPIO_P1_03
	RPI_GPIO_P1_05
	RPI_GPIO_P1_07
	RPI_GPIO_P1_08
	RPI_GPIO_P1_10
	RPI_GPIO_P1_11
	RPI_GPIO_P1_12
	RPI_GPIO_P1_13
	RPI_GPIO_P1_15
	RPI_GPIO_P1_16
	RPI_GPIO_P1_18
	RPI_GPIO_P1_19
	RPI_GPIO_P1_21
	RPI_GPIO_P1_22
	RPI_GPIO_P1_23
	RPI_GPIO_P1_24
	RPI_GPIO_P1_26
) ] );

our @EXPORT_OK = ( @{ $EXPORT_TAGS{'all'} } );

our @EXPORT = qw(
	BCM2835_BLOCK_SIZE
	BCM2835_CLOCK_BASE
	BCM2835_GPAFEN0
	BCM2835_GPAFEN1
	BCM2835_GPAREN0
	BCM2835_GPAREN1
	BCM2835_GPCLR0
	BCM2835_GPCLR1
	BCM2835_GPEDS0
	BCM2835_GPEDS1
	BCM2835_GPFEN0
	BCM2835_GPFEN1
	BCM2835_GPFSEL0
	BCM2835_GPFSEL1
	BCM2835_GPFSEL2
	BCM2835_GPFSEL3
	BCM2835_GPFSEL4
	BCM2835_GPFSEL5
	BCM2835_GPHEN0
	BCM2835_GPHEN1
	BCM2835_GPIO_BASE
	BCM2835_GPIO_FSEL_ALT0
	BCM2835_GPIO_FSEL_ALT1
	BCM2835_GPIO_FSEL_ALT2
	BCM2835_GPIO_FSEL_ALT3
	BCM2835_GPIO_FSEL_ALT4
	BCM2835_GPIO_FSEL_ALT5
	BCM2835_GPIO_FSEL_INPT
	BCM2835_GPIO_FSEL_MASK
	BCM2835_GPIO_FSEL_OUTP
	BCM2835_GPIO_PADS
	BCM2835_GPIO_PUD_DOWN
	BCM2835_GPIO_PUD_OFF
	BCM2835_GPIO_PUD_UP
	BCM2835_GPIO_PWM
	BCM2835_GPLEN0
	BCM2835_GPLEN1
	BCM2835_GPLEV0
	BCM2835_GPLEV1
	BCM2835_GPPUD
	BCM2835_GPPUDCLK0
	BCM2835_GPPUDCLK1
	BCM2835_GPREN0
	BCM2835_GPREN1
	BCM2835_GPSET0
	BCM2835_GPSET1
	BCM2835_PADS_GPIO_0_27
	BCM2835_PADS_GPIO_28_45
	BCM2835_PADS_GPIO_46_53
	BCM2835_PAD_DRIVE_10mA
	BCM2835_PAD_DRIVE_12mA
	BCM2835_PAD_DRIVE_14mA
	BCM2835_PAD_DRIVE_16mA
	BCM2835_PAD_DRIVE_2mA
	BCM2835_PAD_DRIVE_4mA
	BCM2835_PAD_DRIVE_6mA
	BCM2835_PAD_DRIVE_8mA
	BCM2835_PAD_GROUP_GPIO_0_27
	BCM2835_PAD_GROUP_GPIO_28_45
	BCM2835_PAD_GROUP_GPIO_46_53
	BCM2835_PAD_HYSTERESIS_ENABLED
	BCM2835_PAD_SLEW_RATE_UNLIMITED
	BCM2835_PAGE_SIZE
	BCM2835_PERI_BASE
	BCM2835_PWM0_DATA
	BCM2835_PWM0_ENABLE
	BCM2835_PWM0_MS_MODE
	BCM2835_PWM0_OFFSTATE
	BCM2835_PWM0_RANGE
	BCM2835_PWM0_REPEATFF
	BCM2835_PWM0_REVPOLAR
	BCM2835_PWM0_SERIAL
	BCM2835_PWM0_USEFIFO
	BCM2835_PWM1_DATA
	BCM2835_PWM1_ENABLE
	BCM2835_PWM1_MS_MODE
	BCM2835_PWM1_OFFSTATE
	BCM2835_PWM1_RANGE
	BCM2835_PWM1_REPEATFF
	BCM2835_PWM1_REVPOLAR
	BCM2835_PWM1_SERIAL
	BCM2835_PWM1_USEFIFO
	BCM2835_PWMCLK_CNTL
	BCM2835_PWMCLK_DIV
	BCM2835_PWM_CONTROL
	BCM2835_PWM_STATUS
	HIGH
	LOW
	RPI_GPIO_P1_03
	RPI_GPIO_P1_05
	RPI_GPIO_P1_07
	RPI_GPIO_P1_08
	RPI_GPIO_P1_10
	RPI_GPIO_P1_11
	RPI_GPIO_P1_12
	RPI_GPIO_P1_13
	RPI_GPIO_P1_15
	RPI_GPIO_P1_16
	RPI_GPIO_P1_18
	RPI_GPIO_P1_19
	RPI_GPIO_P1_21
	RPI_GPIO_P1_22
	RPI_GPIO_P1_23
	RPI_GPIO_P1_24
	RPI_GPIO_P1_26
);

our $VERSION = '1.0';

sub AUTOLOAD {
    # This AUTOLOAD is used to 'autoload' constants from the constant()
    # XS function.

    my $constname;
    our $AUTOLOAD;
    ($constname = $AUTOLOAD) =~ s/.*:://;
    croak "&Device::BCM2835::constant not defined" if $constname eq 'constant';
    my ($error, $val) = constant($constname);
    if ($error) { croak $error; }
    {
	no strict 'refs';
	# Fixed between 5.005_53 and 5.005_61
#XXX	if ($] >= 5.00561) {
#XXX	    *$AUTOLOAD = sub () { $val };
#XXX	}
#XXX	else {
	    *$AUTOLOAD = sub { $val };
#XXX	}
    }
    goto &$AUTOLOAD;
}

require XSLoader;
XSLoader::load('Device::BCM2835', $VERSION);

# Preloaded methods go here.

# Autoload methods go after =cut, and are processed by the autosplit program.

1;
__END__


=head1 NAME

Device::BCM2835 - Perl extension for accesing GPIO pins on a Raspberry Pi via the BCM 2835 GPIO

=head1 SYNOPSIS

  use Device::BCM2835;
  # Library managment
  Device::BCM2835::set_debug(1);
  Device::BCM2835::init();

  # Low level register access
  Device::BCM2835::peri_read(&Device::BCM2835::BCM2835_GPIO_BASE + &Device::BCM2835::BCM2835_GPFSEL1);
  Device::BCM2835::peri_write(&Device::BCM2835::BCM2835_GPIO_BASE + &Device::BCM2835::BCM2835_GPFSEL2, 0xdeadbeef)
  Device::BCM2835::peri_set_bits(&Device::BCM2835::BCM2835_GPIO_BASE + &Device::BCM2835::BCM2835_GPFSEL3, 0xdeadbeef, 0x1f);

  # GPIO register access
  Device::BCM2835::gpio_fsel(&Device::BCM2835::RPI_GPIO_P1_11, 
    &Device::BCM2835::BCM2835_GPIO_FSEL_OUTP);
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
  my $pad = Device::BCM2835::gpio_pad(&Device::BCM2835::BCM2835_PAD_GROUP_GPIO_0_27);
  Device::BCM2835::gpio_set_pad(&Device::BCM2835::BCM2835_PAD_GROUP_GPIO_0_27, 
     &Device::BCM2835::BCM2835_PAD_HYSTERESIS_ENABLED | &Device::BCM2835::BCM2835_PAD_DRIVE_10mA);

  # High level and convenience functions
  Device::BCM2835::delay(10);
  Device::BCM2835::delayMicroseconds(10);
  Device::BCM2835::gpio_write(&Device::BCM2835::RPI_GPIO_P1_11, 1);
  Device::BCM2835::gpio_set_pud(&Device::BCM2835::RPI_GPIO_P1_11, 
     &Device::BCM2835::BCM2835_GPIO_PUD_UP);

=head1 DESCRIPTION

Provides access to 
GPIO and other IO functions on the Broadcom BCM 2835 chip as used on 
Raspberry Pi (RPi) http://www.raspberrypi.org

Allows access to the GPIO pins on the
26 pin IDE plug on the RPi board so you can control and interface with various external devices.
It provides functions for reading digital inputs and setting digital outputs.
Pin event detection is supported by polling (interrupts not supported).

Building this module requires the bcm2835 library to be installed. 
You can get the latest version from  
http://www.open.com.au/mikem/bcm2835/

=over 4

=item my $ret = Device::BCM2835::init();

Initialise the library by opening /dev/mem and getting pointers to the 
internal memory for BCM 2835 device registers. You must call this (successfully)
before calling any other 
functions in this library (except Device::BCM2835::set_debug). 
If Device::BCM2835::init() fails by returning 0, 
calling any other function may result in crashes or other failures.
Prints messages to stderr in case of errors.
 return 1 if successful else 0

=item Device::BCM2835::set_debug($debug);

Sets the debug level of the library.
A value of 1 prevents mapping to /dev/mem, and makes the library print out
what it would do, rather than accessing the GPIO registers.
A value of 0, the default, causes nomal operation.
Call this before calling Device::BCM2835::init();
 debug The new debug level. 1 means debug

=item my $value =  Device::BCM2835::peri_read($paddr);

Reads 32 bit value from a peripheral address
The read is done twice, and is therefore always safe in terms of 
manual section 1.3 Peripheral access precautions for correct memory ordering
 paddr Physical address to read from. See BCM2835_GPIO_BASE etc.
 return the value read from the 32 bit register

=item Device::BCM2835::peri_write($paddr, $value);

Writes 32 bit value from a peripheral address
The write is done twice, and is therefore always safe in terms of 
manual section 1.3 Peripheral access precautions for correct memory ordering
 paddr Physical address to read from. See BCM2835_GPIO_BASE etc.
 value The 32 bit value to write

=item Device::BCM2835::peri_set_bits($paddr, $value, $mask);

Alters a number of bits in a 32 peripheral regsiter.
It reads the current valu and then alters the bits deines as 1 in mask, 
according to the bit value in value. 
All other bits that are 0 in the mask are unaffected.
Use this to alter a subset of the bits in a register.
The write is done twice, and is therefore always safe in terms of 
manual section 1.3 Peripheral access precautions for correct memory ordering
 paddr Physical address to read from. See BCM2835_GPIO_BASE etc.
 value The 32 bit value to write, masked in by mask.
 mask Bitmask that defines the bits that will be altered in the register.

=item Device::BCM2835::gpio_fsel($pin, $mode);

Sets the Function Select register for the given pin, which configures
the pin as Input, Output or one of the 6 alternate functions.
 pin GPIO number, or one of RPI_GPIO_P1_* from RPiGPIOPin.
 mode Mode to set the pin to, one of BCM2835_GPIO_FSEL_* from \ref bcm2835FunctionSelect

=item Device::BCM2835::gpio_set($pin);

Sets the specified pin output to 
HIGH.
See Also Device::BCM2835::gpio_write()
 pin GPIO number, or one of RPI_GPIO_P1_* from \ref RPiGPIOPin.

=item Device::BCM2835::gpio_clr($pin);

Sets the specified pin output to 
LOW.
See Also Device::BCM2835::gpio_write()
 pin GPIO number, or one of RPI_GPIO_P1_* from \ref RPiGPIOPin.

=item my $value = Device::BCM2835::gpio_lev($pin);

Reads the current level on the specified 
pin and returns either HIGH or LOW. Works whether or not the pin
is an input or an output.
 pin GPIO number, or one of RPI_GPIO_P1_* from \ref RPiGPIOPin.
 return the current level  either HIGH or LOW

=item my $value = Device::BCM2835::gpio_eds($pin);

Event Detect Status.
Tests whether the specified pin has detected a level or edge
as requested by Device::BCM2835::gpio_ren(), Device::BCM2835::gpio_fen(), Device::BCM2835::gpio_hen(), 
Device::BCM2835::gpio_len(), Device::BCM2835::gpio_aren(), Device::BCM2835::gpio_afen().
Clear the flag for a given pin by calling Device::BCM2835::gpio_set_eds(pin);
 pin GPIO number, or one of RPI_GPIO_P1_* from \ref RPiGPIOPin.
 return HIGH if the event detect status for th given pin is true.

=item Device::BCM2835::gpio_set_eds($pin);

Sets the Event Detect Status register for a given pin to 1, 
which has the effect of clearing the flag. Use this afer seeing
an Event Detect Status on the pin.
 pin GPIO number, or one of RPI_GPIO_P1_* from \ref RPiGPIOPin.

=item Device::BCM2835::gpio_ren($pin);

Enable Rising Edge Detect Enable for the specified pin.
When a rising edge is detected, sets the appropriate pin in Event Detect Status.
The GPRENn registers use
synchronous edge detection. This means the input signal is sampled using the
system clock and then it is looking for a “011” pattern on the sampled signal. This
has the effect of suppressing glitches.
 pin GPIO number, or one of RPI_GPIO_P1_* from \ref RPiGPIOPin.

=item Device::BCM2835::gpio_fen($pin);

Enable Falling Edge Detect Enable for the specified pin.
When a falling edge is detected, sets the appropriate pin in Event Detect Status.
The GPRENn registers use
synchronous edge detection. This means the input signal is sampled using the
system clock and then it is looking for a “100” pattern on the sampled signal. This
has the effect of suppressing glitches.
 pin GPIO number, or one of RPI_GPIO_P1_* from \ref RPiGPIOPin.

=item Device::BCM2835::gpio_hen($in);

Enable High Detect Enable for the specified pin.
When a HIGH level is detected on the pin, sets the appropriate pin in Event Detect Status.
 pin GPIO number, or one of RPI_GPIO_P1_* from \ref RPiGPIOPin.

=item Device::BCM2835::gpio_len($pin);

Enable Low Detect Enable for the specified pin.
When a LOW level is detected on the pin, sets the appropriate pin in Event Detect Status.
 pin GPIO number, or one of RPI_GPIO_P1_* from \ref RPiGPIOPin.

=item Device::BCM2835::gpio_aren($pin);

Enable Asynchronous Rising Edge Detect Enable for the specified pin.
When a rising edge is detected, sets the appropriate pin in Event Detect Status.
Asynchronous means the incoming signal is not sampled by the system clock. As such
rising edges of very short duration can be detected.
 pin GPIO number, or one of RPI_GPIO_P1_* from \ref RPiGPIOPin.

=item Device::BCM2835::gpio_afen($pin);

Enable Asynchronous Falling Edge Detect Enable for the specified pin.
When a falling edge is detected, sets the appropriate pin in Event Detect Status.
Asynchronous means the incoming signal is not sampled by the system clock. As such
falling edges of very short duration can be detected.
 pin GPIO number, or one of RPI_GPIO_P1_* from \ref RPiGPIOPin.

=item Device::BCM2835::gpio_pud($pud);

Sets the Pull-up/down register for the given pin. This is
used with Device::BCM2835::gpio_pudclk() to set the  Pull-up/down resistor for the given pin.
However, it is usually more convenient to use Device::BCM2835::gpio_set_pud().
See Also: Device::BCM2835::gpio_set_pud()
 pud The desired Pull-up/down mode. One of BCM2835_GPIO_PUD_* from bcm2835PUDControl

=item Device::BCM2835::gpio_pudclk($pin, $on);

Clocks the Pull-up/down value set earlier by Device::BCM2835::gpio_pud() into the pin.
See Also: Device::BCM2835::gpio_set_pud()
 pin GPIO number, or one of RPI_GPIO_P1_* from \ref RPiGPIOPin.
 on HIGH to clock the value from Device::BCM2835::gpio_pud() into the pin. 
LOW to remove the clock. 

=item uint32_t Device::BCM2835::gpio_pad($group);

Reads and returns the Pad Control for the given GPIO group.
 group The GPIO pad group number, one of BCM2835_PAD_GROUP_GPIO_*
 return Mask of bits from BCM2835_PAD_* from \ref bcm2835PadGroup

=item Device::BCM2835::gpio_set_pad($group, $control);

Sets the Pad Control for the given GPIO group.
 group The GPIO pad group number, one of BCM2835_PAD_GROUP_GPIO_*
 control Mask of bits from BCM2835_PAD_* from \ref bcm2835PadGroup

=item delay ($millis);

Delays for the specified number of milliseconds.
Uses nanosleep(), and therefore does not use CPU until the time is up.
 millis Delay in milliseconds

=item delayMicroseconds ($micros);

Delays for the specified number of microseconds.
Uses nanosleep(), and therefore does not use CPU until the time is up.
 micros Delay in microseconds

=item Device::BCM2835::gpio_write($pin, $on);

Sets the output state of the specified pin
 pin GPIO number, or one of RPI_GPIO_P1_* from \ref RPiGPIOPin.
 on HIGH sets the output to HIGH and LOW to LOW.

=item Device::BCM2835::gpio_set_pud($pin, $pud);

Sets the Pull-up/down mode for the specified pin. This is more convenient than
clocking the mode in with Device::BCM2835::gpio_pud() and Device::BCM2835::gpio_pudclk().
 pin GPIO number, or one of RPI_GPIO_P1_* from \ref RPiGPIOPin.
 pud The desired Pull-up/down mode. One of BCM2835_GPIO_PUD_* from bcm2835PUDControl

=back

=head1 Example

This simple program blinks RPi GPIO pin 11 every 500ms. 
It must be run as root, in order to access the 
BCM 2835 GPIO address space:


 use Device::BCM2835;
 use strict;

 # call set_debug(1) to do a non-destructive test on non-RPi hardware
 #Device::BCM2835::set_debug(1);
 Device::BCM2835::init() 
  || die "Could not init library";

 # Blink pin 11:
 # Set RPi pin 11 to be an output
 Device::BCM2835::gpio_fsel(&Device::BCM2835::RPI_GPIO_P1_11, 
                            &Device::BCM2835::BCM2835_GPIO_FSEL_OUTP);

 while (1)
 {
     # Turn it on
     Device::BCM2835::gpio_write(&Device::BCM2835::RPI_GPIO_P1_11, 1);
     Device::BCM2835::delay(500); # Milliseconds
     # Turn it off
     Device::BCM2835::gpio_write(&Device::BCM2835::RPI_GPIO_P1_11, 0);
     Device::BCM2835::delay(500); # Milliseconds
 }

=head2 EXPORT

None by default.

=head2 Exportable constants

  BCM2835_BLOCK_SIZE
  BCM2835_CLOCK_BASE
  BCM2835_GPAFEN0
  BCM2835_GPAFEN1
  BCM2835_GPAREN0
  BCM2835_GPAREN1
  BCM2835_GPCLR0
  BCM2835_GPCLR1
  BCM2835_GPEDS0
  BCM2835_GPEDS1
  BCM2835_GPFEN0
  BCM2835_GPFEN1
  BCM2835_GPFSEL0
  BCM2835_GPFSEL1
  BCM2835_GPFSEL2
  BCM2835_GPFSEL3
  BCM2835_GPFSEL4
  BCM2835_GPFSEL5
  BCM2835_GPHEN0
  BCM2835_GPHEN1
  BCM2835_GPIO_BASE
  BCM2835_GPIO_FSEL_ALT0
  BCM2835_GPIO_FSEL_ALT1
  BCM2835_GPIO_FSEL_ALT2
  BCM2835_GPIO_FSEL_ALT3
  BCM2835_GPIO_FSEL_ALT4
  BCM2835_GPIO_FSEL_ALT5
  BCM2835_GPIO_FSEL_INPT
  BCM2835_GPIO_FSEL_MASK
  BCM2835_GPIO_FSEL_OUTP
  BCM2835_GPIO_PADS
  BCM2835_GPIO_PUD_DOWN
  BCM2835_GPIO_PUD_OFF
  BCM2835_GPIO_PUD_UP
  BCM2835_GPIO_PWM
  BCM2835_GPLEN0
  BCM2835_GPLEN1
  BCM2835_GPLEV0
  BCM2835_GPLEV1
  BCM2835_GPPUD
  BCM2835_GPPUDCLK0
  BCM2835_GPPUDCLK1
  BCM2835_GPREN0
  BCM2835_GPREN1
  BCM2835_GPSET0
  BCM2835_GPSET1
  BCM2835_PADS_GPIO_0_27
  BCM2835_PADS_GPIO_28_45
  BCM2835_PADS_GPIO_46_53
  BCM2835_PAD_DRIVE_10mA
  BCM2835_PAD_DRIVE_12mA
  BCM2835_PAD_DRIVE_14mA
  BCM2835_PAD_DRIVE_16mA
  BCM2835_PAD_DRIVE_2mA
  BCM2835_PAD_DRIVE_4mA
  BCM2835_PAD_DRIVE_6mA
  BCM2835_PAD_DRIVE_8mA
  BCM2835_PAD_GROUP_GPIO_0_27
  BCM2835_PAD_GROUP_GPIO_28_45
  BCM2835_PAD_GROUP_GPIO_46_53
  BCM2835_PAD_HYSTERESIS_ENABLED
  BCM2835_PAD_SLEW_RATE_UNLIMITED
  BCM2835_PAGE_SIZE
  BCM2835_PERI_BASE
  BCM2835_PWM0_DATA
  BCM2835_PWM0_ENABLE
  BCM2835_PWM0_MS_MODE
  BCM2835_PWM0_OFFSTATE
  BCM2835_PWM0_RANGE
  BCM2835_PWM0_REPEATFF
  BCM2835_PWM0_REVPOLAR
  BCM2835_PWM0_SERIAL
  BCM2835_PWM0_USEFIFO
  BCM2835_PWM1_DATA
  BCM2835_PWM1_ENABLE
  BCM2835_PWM1_MS_MODE
  BCM2835_PWM1_OFFSTATE
  BCM2835_PWM1_RANGE
  BCM2835_PWM1_REPEATFF
  BCM2835_PWM1_REVPOLAR
  BCM2835_PWM1_SERIAL
  BCM2835_PWM1_USEFIFO
  BCM2835_PWMCLK_CNTL
  BCM2835_PWMCLK_DIV
  BCM2835_PWM_CONTROL
  BCM2835_PWM_STATUS
  HIGH
  LOW
  RPI_GPIO_P1_03
  RPI_GPIO_P1_05
  RPI_GPIO_P1_07
  RPI_GPIO_P1_08
  RPI_GPIO_P1_10
  RPI_GPIO_P1_11
  RPI_GPIO_P1_12
  RPI_GPIO_P1_13
  RPI_GPIO_P1_15
  RPI_GPIO_P1_16
  RPI_GPIO_P1_18
  RPI_GPIO_P1_19
  RPI_GPIO_P1_21
  RPI_GPIO_P1_22
  RPI_GPIO_P1_23
  RPI_GPIO_P1_24
  RPI_GPIO_P1_26

=head1 SEE ALSO

You will need to familiar with the GPIO pinouts etc:

http://elinux.org/RPi_Low-level_peripherals
http://www.raspberrypi.org/wp-content/uploads/2012/02/BCM2835-ARM-Peripherals.pdf
http://www.open.com.au/mikem/bcm2835

=head1 AUTHOR

Mike McCauley, E<lt>mikem@open.com.auE<gt>

=head1 COPYRIGHT AND LICENSE

Copyright (C) 2012 by Mike McCauley

This library is free software; you can redistribute it and/or modify
it under the same terms as Perl itself, either Perl version 5.14.2 or,
at your option, any later version of Perl 5 you may have available.


=cut