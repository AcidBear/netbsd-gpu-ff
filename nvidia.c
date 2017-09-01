#include <sys/param.h>
#include <sys/module.h>

#include <dev/acpi/acpireg.h>
#include <dev/acpi/acpivar.h>

MODULE(MODULE_CLASS_DRIVER, nvidia, NULL);

#define NVIDIA_OFF1 "\\_SB.PCI0.P0P1.VGA._OFF"
#define NVIDIA_OFF2 "\\_SB.PCI0.P0P2.VGA._OFF"
#define NVIDIA_OFF3 "\\_SB.PCI0.P0P3.PEGP._OFF"
#define NVIDIA_OFF4 "\\_SB.PCI0.P0P2.PEGP._OFF"
#define NVIDIA_OFF5 "\\_SB.PCI0.P0P1.PEGP._OFF"
#define NVIDIA_OFF6 "\\_SB.PCI0.MXR0.MXM0._OFF"
#define NVIDIA_OFF7 "\\_SB.PCI0.PEG1.GFX0._OFF"
#define NVIDIA_OFF8 "\\_SB.PCI0.PEG0.GFX0.DOFF"
#define NVIDIA_OFF9 "\\_SB.PCI0.PEG1.GFX0.DOFF"
#define NVIDIA_OFF10 "\\_SB.PCI0.PEG0.PEGP._OFF"
#define NVIDIA_OFF11 "\\_SB.PCI0.XVR0.Z01I.DGOF"
#define NVIDIA_OFF12 "\\_SB.PCI0.PEGR.GFX0._OFF"
#define NVIDIA_OFF13 "\\_SB_.PCI0.P0P3.PEGP"
#define NVIDIA_OFF14 "\\_SB.PCI0.PEG.VID._OFF"
#define NVIDIA_OFF15 "\\_SB.PCI0.PEG0.VID._OFF"
#define NVIDIA_OFF16 "\\_SB.PCI0.P0P2.DGPU._OFF"
#define NVIDIA_OFF17 "\\_SB.PCI0.P0P4.DGPU.DOFF"
#define NVIDIA_OFF18 "\\_SB.PCI0.IXVE.IGPU.DGOF"
#define NVIDIA_OFF19 "\\_SB.PCI0.RP00.VGA._PS3"
#define NVIDIA_OFF20 "\\_SB.PCI0.RP00.VGA.P3MO"
#define NVIDIA_OFF21 "\\_SB.PCI0.GFX0.DSM._T_0"
#define NVIDIA_OFF22 "\\_SB.PCI0.LPC.EC.PUBS._OFF"
#define NVIDIA_OFF23 "\\_SB.PCI0.P0P2.NVID._OFF"
#define NVIDIA_OFF24 "\\_SB.PCI0.P0P2.VGA.PX02"
#define NVIDIA_OFF25 "\\_SB_.PCI0.PEGP.DGFX._OFF"
#define NVIDIA_OFF26 "\\_SB_.PCI0.VGA.PX02"
#define NVIDIA_OFF27 "\\_SB.PCI0.PEG0.PEGP.SGOF"
#define NVIDIA_OFF28 "\\_SB.PCI0.AGP.VGA.PX02"
#define NVIDIA_OFF29 "\\_SB_.PCI0.OVGA.ATPX"
#define NVIDIA_OFF30 "\\_SB_.PCI0.OVGA.XTPX"
#define NVIDIA_ON "\\_SB.PCI0.PEG1.GFX0._ON"

/*
 * Turns nVidia card off upon load and on upon unload.
 */

static int
nvidia_modcmd(modcmd_t cmd, void *aux)
{
        ACPI_INTEGER val;
        ACPI_STATUS rv;

        switch (cmd) {


        case MODULE_CMD_INIT:

                      rv = acpi_eval_integer(NULL, NVIDIA_OFF1, &val);

                      if (ACPI_FAILURE(rv)) {
                        (void)printf("Failed to evaluate '%s': %s\n",
                                     NVIDIA_OFF1, AcpiFormatException(rv));
                        rv = acpi_eval_integer(NULL, NVIDIA_OFF2, &val);

                        if (ACPI_FAILURE(rv)) {
                          (void)printf("Failed to evaluate '%s': %s\n",
                                        NVIDIA_OFF2, AcpiFormatException(rv));
                          rv = acpi_eval_integer(NULL, NVIDIA_OFF3, &val);

                          if (ACPI_FAILURE(rv)) {
                            (void)printf("Failed to evaluate '%s': %s\n",
                                          NVIDIA_OFF3, AcpiFormatException(rv));
                            rv = acpi_eval_integer(NULL, NVIDIA_OFF4, &val);

                            if (ACPI_FAILURE(rv)) {
                              (void)printf("Failed to evaluate '%s': %s\n",
                                            NVIDIA_OFF4, AcpiFormatException(rv));
                              rv = acpi_eval_integer(NULL, NVIDIA_OFF5, &val);

                              if (ACPI_FAILURE(rv)) {
                                (void)printf("Failed to evaluate '%s': %s\n",
                                    NVIDIA_OFF5, AcpiFormatException(rv));
                                rv = acpi_eval_integer(NULL, NVIDIA_OFF6, &val);

                                if (ACPI_FAILURE(rv)) {
                                  (void)printf("Failed to evaluate '%s': %s\n",
                                      NVIDIA_OFF6, AcpiFormatException(rv));
                                  rv = acpi_eval_integer(NULL, NVIDIA_OFF7, &val);

                                  if (ACPI_FAILURE(rv)) {
                                    (void)printf("Failed to evaluate '%s': %s\n",
                                        NVIDIA_OFF7, AcpiFormatException(rv));
                                    rv = acpi_eval_integer(NULL, NVIDIA_OFF8, &val);

                                    if (ACPI_FAILURE(rv)) {
                                      (void)printf("Failed to evaluate '%s': %s\n",
                                          NVIDIA_OFF8, AcpiFormatException(rv));
                                      rv = acpi_eval_integer(NULL, NVIDIA_OFF9, &val);

                                      if (ACPI_FAILURE(rv)) {
                                        (void)printf("Failed to evaluate '%s': %s\n",
                                            NVIDIA_OFF9, AcpiFormatException(rv));
                                        rv = acpi_eval_integer(NULL, NVIDIA_OFF10, &val);

                                        if (ACPI_FAILURE(rv)) {
                                          (void)printf("Failed to evaluate '%s': %s\n",
                                              NVIDIA_OFF10, AcpiFormatException(rv));
                                          rv = acpi_eval_integer(NULL, NVIDIA_OFF11, &val);

                                          if (ACPI_FAILURE(rv)) {
                                            (void)printf("Failed to evaluate '%s': %s\n",
                                                NVIDIA_OFF11, AcpiFormatException(rv));
                                            rv = acpi_eval_integer(NULL, NVIDIA_OFF12, &val);

                                            if (ACPI_FAILURE(rv)) {
                                              (void)printf("Failed to evaluate '%s': %s\n",
                                                  NVIDIA_OFF12, AcpiFormatException(rv));
                                              rv = acpi_eval_integer(NULL, NVIDIA_OFF13, &val);

                                              if (ACPI_FAILURE(rv)) {
                                                (void)printf("Failed to evaluate '%s': %s\n",
                                                    NVIDIA_OFF13, AcpiFormatException(rv));
                                                rv = acpi_eval_integer(NULL, NVIDIA_OFF14, &val);

                                                if (ACPI_FAILURE(rv)) {
                                                  (void)printf("Failed to evaluate '%s': %s\n",
                                                      NVIDIA_OFF14, AcpiFormatException(rv));
                                                  rv = acpi_eval_integer(NULL, NVIDIA_OFF15, &val);

                                                  if (ACPI_FAILURE(rv)) {
                                                    (void)printf("Failed to evaluate '%s': %s\n",
                                                        NVIDIA_OFF15, AcpiFormatException(rv));
                                                    rv = acpi_eval_integer(NULL, NVIDIA_OFF16, &val);

                                                    if (ACPI_FAILURE(rv)) {
                                                      (void)printf("Failed to evaluate '%s': %s\n",
                                                          NVIDIA_OFF16, AcpiFormatException(rv));
                                                      rv = acpi_eval_integer(NULL, NVIDIA_OFF17, &val);

                                                      if (ACPI_FAILURE(rv)) {
                                                        (void)printf("Failed to evaluate '%s': %s\n",
                                                            NVIDIA_OFF17, AcpiFormatException(rv));
                                                        rv = acpi_eval_integer(NULL, NVIDIA_OFF18, &val);

                                                        if (ACPI_FAILURE(rv)) {
                                                          (void)printf("Failed to evaluate '%s': %s\n",
                                                              NVIDIA_OFF18, AcpiFormatException(rv));
                                                          rv = acpi_eval_integer(NULL, NVIDIA_OFF19, &val);

                                                          if (ACPI_FAILURE(rv)) {
                                                            (void)printf("Failed to evaluate '%s': %s\n",
                                                                NVIDIA_OFF19, AcpiFormatException(rv));
                                                            rv = acpi_eval_integer(NULL, NVIDIA_OFF20, &val);

                                                            if (ACPI_FAILURE(rv)) {
                                                              (void)printf("Failed to evaluate '%s': %s\n",
                                                                  NVIDIA_OFF20, AcpiFormatException(rv));
                                                              rv = acpi_eval_integer(NULL, NVIDIA_OFF21, &val);

                                                              if (ACPI_FAILURE(rv)) {
                                                                (void)printf("Failed to evaluate '%s': %s\n",
                                                                    NVIDIA_OFF21, AcpiFormatException(rv));
                                                                rv = acpi_eval_integer(NULL, NVIDIA_OFF22, &val);

                                                                if (ACPI_FAILURE(rv)) {
                                                                  (void)printf("Failed to evaluate '%s': %s\n",
                                                                      NVIDIA_OFF22, AcpiFormatException(rv));
                                                                  rv = acpi_eval_integer(NULL, NVIDIA_OFF23, &val);

                                                                  if (ACPI_FAILURE(rv)) {
                                                                    (void)printf("Failed to evaluate '%s': %s\n",
                                                                        NVIDIA_OFF23, AcpiFormatException(rv));
                                                                    rv = acpi_eval_integer(NULL, NVIDIA_OFF24, &val);

                                                                    if (ACPI_FAILURE(rv)) {
                                                                      (void)printf("Failed to evaluate '%s': %s\n",
                                                                          NVIDIA_OFF24, AcpiFormatException(rv));
                                                                      rv = acpi_eval_integer(NULL, NVIDIA_OFF25, &val);

                                                                      if (ACPI_FAILURE(rv)) {
                                                                        (void)printf("Failed to evaluate '%s': %s\n",
                                                                            NVIDIA_OFF25, AcpiFormatException(rv));
                                                                        rv = acpi_eval_integer(NULL, NVIDIA_OFF26, &val);

                                                                        if (ACPI_FAILURE(rv)) {
                                                                          (void)printf("Failed to evaluate '%s': %s\n",
                                                                              NVIDIA_OFF26, AcpiFormatException(rv));
                                                                          rv = acpi_eval_integer(NULL, NVIDIA_OFF27, &val);

                                                                          if (ACPI_FAILURE(rv)) {
                                                                            (void)printf("Failed to evaluate '%s': %s\n",
                                                                                NVIDIA_OFF27, AcpiFormatException(rv));
                                                                            rv = acpi_eval_integer(NULL, NVIDIA_OFF28, &val);

                                                                            if (ACPI_FAILURE(rv)) {
                                                                              (void)printf("Failed to evaluate '%s': %s\n",
                                                                                  NVIDIA_OFF28, AcpiFormatException(rv));
                                                                              rv = acpi_eval_integer(NULL, NVIDIA_OFF29, &val);

                                                                              if (ACPI_FAILURE(rv)) {
                                                                                (void)printf("Failed to evaluate '%s': %s\n",
                                                                                    NVIDIA_OFF29, AcpiFormatException(rv));
                                                                                rv = acpi_eval_integer(NULL, NVIDIA_OFF30, &val);
                                                                                
                                                                                if (ACPI_FAILURE(rv)) {
                                                                                  (void)printf("Failed to evaluate '%s': %s\n",
                                                                                      NVIDIA_OFF30, AcpiFormatException(rv));
                                                                                }
                                                                              }
                                                                            } 
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        } 
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                break;

        case MODULE_CMD_FINI:
                rv = acpi_eval_integer(NULL, NVIDIA_ON, &val);

                if (ACPI_FAILURE(rv))
                        (void)printf("Failed to evaluate '%s': %s\n",
                            NVIDIA_OFF1, AcpiFormatException(rv));

                break;

        default:
                return ENOTTY;
        }

        return 0;
}
