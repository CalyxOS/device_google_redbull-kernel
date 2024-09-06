/*
 * This file is auto-generated. Modifications will be lost.
 *
 * See https://android.googlesource.com/platform/bionic/+/master/libc/kernel/
 * for more information.
 */
#ifndef _MSM_AUDIO_MVS_H
#define _MSM_AUDIO_MVS_H
#include <linux/msm_audio.h>
#define AUDIO_GET_MVS_CONFIG _IOW(AUDIO_IOCTL_MAGIC, (AUDIO_MAX_COMMON_IOCTL_NUM + 0), unsigned int)
#define AUDIO_SET_MVS_CONFIG _IOR(AUDIO_IOCTL_MAGIC, (AUDIO_MAX_COMMON_IOCTL_NUM + 1), unsigned int)
#define MVS_MODE_IS733 0x1
#define MVS_MODE_IS127 0x2
#define MVS_MODE_4GV_NB 0x3
#define MVS_MODE_4GV_WB 0x4
#define MVS_MODE_AMR 0x5
#define MVS_MODE_EFR 0x6
#define MVS_MODE_FR 0x7
#define MVS_MODE_HR 0x8
#define MVS_MODE_LINEAR_PCM 0x9
#define MVS_MODE_G711 0xA
#define MVS_MODE_PCM 0xC
#define MVS_MODE_AMR_WB 0xD
#define MVS_MODE_G729A 0xE
#define MVS_MODE_G711A 0xF
#define MVS_MODE_G722 0x10
#define MVS_MODE_PCM_WB 0x12
enum msm_audio_amr_mode {
  MVS_AMR_MODE_0475,
  MVS_AMR_MODE_0515,
  MVS_AMR_MODE_0590,
  MVS_AMR_MODE_0670,
  MVS_AMR_MODE_0740,
  MVS_AMR_MODE_0795,
  MVS_AMR_MODE_1020,
  MVS_AMR_MODE_1220,
  MVS_AMR_MODE_0660,
  MVS_AMR_MODE_0885,
  MVS_AMR_MODE_1265,
  MVS_AMR_MODE_1425,
  MVS_AMR_MODE_1585,
  MVS_AMR_MODE_1825,
  MVS_AMR_MODE_1985,
  MVS_AMR_MODE_2305,
  MVS_AMR_MODE_2385,
  MVS_AMR_MODE_UNDEF
};
enum msm_audio_voc_rate {
  MVS_VOC_0_RATE,
  MVS_VOC_8_RATE,
  MVS_VOC_4_RATE,
  MVS_VOC_2_RATE,
  MVS_VOC_1_RATE,
  MVS_VOC_ERASURE,
  MVS_VOC_RATE_MAX,
  MVS_VOC_RATE_UNDEF = MVS_VOC_RATE_MAX
};
enum msm_audio_amr_frame_type {
  MVS_AMR_SPEECH_GOOD,
  MVS_AMR_SPEECH_DEGRADED,
  MVS_AMR_ONSET,
  MVS_AMR_SPEECH_BAD,
  MVS_AMR_SID_FIRST,
  MVS_AMR_SID_UPDATE,
  MVS_AMR_SID_BAD,
  MVS_AMR_NO_DATA,
  MVS_AMR_SPEECH_LOST
};
enum msm_audio_g711a_mode {
  MVS_G711A_MODE_MULAW,
  MVS_G711A_MODE_ALAW
};
enum msm_audio_g711_mode {
  MVS_G711_MODE_MULAW,
  MVS_G711_MODE_ALAW
};
enum mvs_g722_mode_type {
  MVS_G722_MODE_01,
  MVS_G722_MODE_02,
  MVS_G722_MODE_03,
  MVS_G722_MODE_MAX,
  MVS_G722_MODE_UNDEF
};
enum msm_audio_g711a_frame_type {
  MVS_G711A_SPEECH_GOOD,
  MVS_G711A_SID,
  MVS_G711A_NO_DATA,
  MVS_G711A_ERASURE
};
enum msm_audio_g729a_frame_type {
  MVS_G729A_NO_DATA,
  MVS_G729A_SPEECH_GOOD,
  MVS_G729A_SID,
  MVS_G729A_ERASURE
};
struct min_max_rate {
  uint32_t min_rate;
  uint32_t max_rate;
};
struct msm_audio_mvs_config {
  uint32_t mvs_mode;
  uint32_t rate_type;
  struct min_max_rate min_max_rate;
  uint32_t dtx_mode;
};
#define MVS_MAX_VOC_PKT_SIZE 640
struct gsm_header {
  uint8_t bfi;
  uint8_t sid;
  uint8_t taf;
  uint8_t ufi;
};
struct q6_msm_audio_mvs_frame {
  union {
    uint32_t frame_type;
    uint32_t packet_rate;
    struct gsm_header gsm_frame_type;
  } header;
  uint32_t len;
  uint8_t voc_pkt[MVS_MAX_VOC_PKT_SIZE];
};
struct msm_audio_mvs_frame {
  uint32_t frame_type;
  uint32_t len;
  uint8_t voc_pkt[MVS_MAX_VOC_PKT_SIZE];
};
#define Q5V2_MVS_MAX_VOC_PKT_SIZE 320
struct q5v2_msm_audio_mvs_frame {
  uint32_t frame_type;
  uint32_t len;
  uint8_t voc_pkt[Q5V2_MVS_MAX_VOC_PKT_SIZE];
};
#endif
