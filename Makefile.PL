use 5.008005;
use ExtUtils::MakeMaker;
# See lib/ExtUtils/MakeMaker.pm for details of how to influence
# the contents of the Makefile that is written.
WriteMakefile(
    NAME              => 'Device::BCM2835',
    VERSION_FROM      => 'lib/Device/BCM2835.pm', # finds $VERSION
    PREREQ_PM         => {}, # e.g., Module::Name => 1.1
    ($] >= 5.005 ?     ## Add these new keywords supported since 5.005
      (ABSTRACT_FROM  => 'lib/Device/BCM2835.pm', # retrieve abstract from module
       AUTHOR         => 'Mike McCauley <mikem@open.com.au>') : ()),
    LIBS              => ['-L/usr/local/projects/bcm2835/src -lbcm2835'], # e.g., '-lm'
    DEFINE            => '', # e.g., '-DHAVE_SOMETHING'
    INC               => '-I/usr/local/projects/bcm2835/src', # e.g., '-I. -I/usr/include/other'
);
if  (eval {require ExtUtils::Constant; 1}) {
  # If you edit these definitions to change the constants used by this module,
  # you will need to use the generated const-c.inc and const-xs.inc
  # files to replace their "fallback" counterparts before distributing your
  # changes.
  my @names = (qw(BCM2835_BLOCK_SIZE BCM2835_CLOCK_BASE BCM2835_GPAFEN0
		 BCM2835_GPAFEN1 BCM2835_GPAREN0 BCM2835_GPAREN1 BCM2835_GPCLR0
		 BCM2835_GPCLR1 BCM2835_GPEDS0 BCM2835_GPEDS1 BCM2835_GPFEN0
		 BCM2835_GPFEN1 BCM2835_GPFSEL0 BCM2835_GPFSEL1 BCM2835_GPFSEL2
		 BCM2835_GPFSEL3 BCM2835_GPFSEL4 BCM2835_GPFSEL5 BCM2835_GPHEN0
		 BCM2835_GPHEN1 BCM2835_GPIO_BASE BCM2835_GPIO_FSEL_MASK
		 BCM2835_GPIO_PADS BCM2835_GPIO_PWM BCM2835_GPLEN0
		 BCM2835_GPLEN1 BCM2835_GPLEV0 BCM2835_GPLEV1 BCM2835_GPPUD
		 BCM2835_GPPUDCLK0 BCM2835_GPPUDCLK1 BCM2835_GPREN0
		 BCM2835_GPREN1 BCM2835_GPSET0 BCM2835_GPSET1
		 BCM2835_PADS_GPIO_0_27 BCM2835_PADS_GPIO_28_45
		 BCM2835_PADS_GPIO_46_53 BCM2835_PAD_DRIVE_10mA
		 BCM2835_PAD_DRIVE_12mA BCM2835_PAD_DRIVE_14mA
		 BCM2835_PAD_DRIVE_16mA BCM2835_PAD_DRIVE_2mA
		 BCM2835_PAD_DRIVE_4mA BCM2835_PAD_DRIVE_6mA
		 BCM2835_PAD_DRIVE_8mA BCM2835_PAD_HYSTERESIS_ENABLED
		 BCM2835_PAD_SLEW_RATE_UNLIMITED BCM2835_PAGE_SIZE
		 BCM2835_PERI_BASE BCM2835_PWM0_DATA BCM2835_PWM0_ENABLE
		 BCM2835_PWM0_MS_MODE BCM2835_PWM0_OFFSTATE BCM2835_PWM0_RANGE
		 BCM2835_PWM0_REPEATFF BCM2835_PWM0_REVPOLAR
		 BCM2835_PWM0_SERIAL BCM2835_PWM0_USEFIFO BCM2835_PWM1_DATA
		 BCM2835_PWM1_ENABLE BCM2835_PWM1_MS_MODE BCM2835_PWM1_OFFSTATE
		 BCM2835_PWM1_RANGE BCM2835_PWM1_REPEATFF BCM2835_PWM1_REVPOLAR
		 BCM2835_PWM1_SERIAL BCM2835_PWM1_USEFIFO BCM2835_PWMCLK_CNTL
		 BCM2835_PWMCLK_DIV BCM2835_PWM_CONTROL BCM2835_PWM_STATUS HIGH
		 LOW),
              {name=>"BCM2835_GPIO_FSEL_ALT0", macro=>"1"},
              {name=>"BCM2835_GPIO_FSEL_ALT1", macro=>"1"},
              {name=>"BCM2835_GPIO_FSEL_ALT2", macro=>"1"},
              {name=>"BCM2835_GPIO_FSEL_ALT3", macro=>"1"},
              {name=>"BCM2835_GPIO_FSEL_ALT4", macro=>"1"},
              {name=>"BCM2835_GPIO_FSEL_ALT5", macro=>"1"},
              {name=>"BCM2835_GPIO_FSEL_INPT", macro=>"1"},
              {name=>"BCM2835_GPIO_FSEL_OUTP", macro=>"1"},
              {name=>"BCM2835_GPIO_PUD_DOWN", macro=>"1"},
              {name=>"BCM2835_GPIO_PUD_OFF", macro=>"1"},
              {name=>"BCM2835_GPIO_PUD_UP", macro=>"1"},
              {name=>"BCM2835_PAD_GROUP_GPIO_0_27", macro=>"1"},
              {name=>"BCM2835_PAD_GROUP_GPIO_28_45", macro=>"1"},
              {name=>"BCM2835_PAD_GROUP_GPIO_46_53", macro=>"1"},
              {name=>"RPI_GPIO_P1_03", macro=>"1"},
              {name=>"RPI_GPIO_P1_05", macro=>"1"},
              {name=>"RPI_GPIO_P1_07", macro=>"1"},
              {name=>"RPI_GPIO_P1_08", macro=>"1"},
              {name=>"RPI_GPIO_P1_10", macro=>"1"},
              {name=>"RPI_GPIO_P1_11", macro=>"1"},
              {name=>"RPI_GPIO_P1_12", macro=>"1"},
              {name=>"RPI_GPIO_P1_13", macro=>"1"},
              {name=>"RPI_GPIO_P1_15", macro=>"1"},
              {name=>"RPI_GPIO_P1_16", macro=>"1"},
              {name=>"RPI_GPIO_P1_18", macro=>"1"},
              {name=>"RPI_GPIO_P1_19", macro=>"1"},
              {name=>"RPI_GPIO_P1_21", macro=>"1"},
              {name=>"RPI_GPIO_P1_22", macro=>"1"},
              {name=>"RPI_GPIO_P1_23", macro=>"1"},
              {name=>"RPI_GPIO_P1_24", macro=>"1"},
              {name=>"RPI_GPIO_P1_26", macro=>"1"});
  ExtUtils::Constant::WriteConstants(
                                     NAME         => 'Device::BCM2835',
                                     NAMES        => \@names,
                                     DEFAULT_TYPE => 'IV',
                                     C_FILE       => 'const-c.inc',
                                     XS_FILE      => 'const-xs.inc',
                                  );

}
else {
  use File::Copy;
  use File::Spec;
  foreach my $file ('const-c.inc', 'const-xs.inc') {
    my $fallback = File::Spec->catfile('fallback', $file);
    copy ($fallback, $file) or die "Can't copy $fallback to $file: $!";
  }
}
