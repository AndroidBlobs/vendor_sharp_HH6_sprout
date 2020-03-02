/*============================================================================

FIHTDC

versions define : VABC.XXXX.YY
A:Main cam module number
B:Front cam module number
C:AUX cam module number
XXXX:firmware major version
YY:firmware test version

============================================================================*/
#include "fih_chromatix.h"

static fih_chromatix fih_chromatix_struc=
{
    .versions="V100.0039.01",
    .lowlight_key = 0, //[FIH] Used multi threshold, set 0 to disable single lowlight key
    .lowlight_need_sharpe = 0,
    .lowlight_intensity = 0,
    .lowlight_light_intensity = 0,
    .lowlight_saturation = 0,
    .lowlight_threshold = 0,
    .sdn_key = 0, //[FIH] Used multi threshold, set 0 to disable single sdn key
    .sdn_type = 0,
    .sdn_color = 0,
    .sdn_lumin = 0,
    .sdn_sharp = 0,
    .sdn_ring = 0,
    .sdn_threshold = 0,
    //[FIH] Support multi threshold
    .array_key = 1, //[FIH] Used multi threshold, set 1 to enable multi threshold key
    .lowlight_info_array = 
    {
      .lowlight_info =
      {
        {
          .lowlight_need_sharpe = 20, 
          .lowlight_intensity = 60, //20180119_Arthur 60,//20171116_Arthur 100, //20171107_test 60,
          .lowlight_light_intensity = 0, 
          .lowlight_saturation = 60,
          .lowlight_threshold = 250, //20171109_Arthur 500,
        },
        {
          .lowlight_need_sharpe = 10, //20,
          .lowlight_intensity = 70,
          .lowlight_light_intensity = 0,
          .lowlight_saturation = 50,
          .lowlight_threshold = 420,
        },
        {
          .lowlight_need_sharpe = 50, //20,
          .lowlight_intensity = 60,
          .lowlight_light_intensity = 0,
          .lowlight_saturation = 50, 
          .lowlight_threshold = 860,
        },
        {
          .lowlight_need_sharpe = 10,
          .lowlight_intensity = 70,
          .lowlight_light_intensity = 0,
          .lowlight_saturation = 50, 
          .lowlight_threshold = 1700,
        },
        {
          .lowlight_need_sharpe = 10,
          .lowlight_intensity = 70,
          .lowlight_light_intensity = 10,
          .lowlight_saturation = 50, 
          .lowlight_threshold = 2000,
        },
        {
          .lowlight_need_sharpe = 30,
          .lowlight_intensity = 90,
          .lowlight_light_intensity = 10,
          .lowlight_saturation = 50, 
          .lowlight_threshold = 3200,
        },
      },
      .size = 5, 
    },
    //arcsoft hdr
    .hdr_info = 
    {
      .hdr = 
      {
        .hdr_tone = 2,
        .hdr_bright = 0,
        .hdr_saturation = 2, //20171109_Arthur 1,
        .hdr_perf = 2,
      },
      .enable = 1, //1 is for Enable, 0 is for Disable
    },
};

/*============================================================================
 * FUNCTION    - load_chromatix -
 *
 * DESCRIPTION:
 * DESCRIPTION:
 *==========================================================================*/
void *load_chromatix(void)
{
    return &fih_chromatix_struc;
}
