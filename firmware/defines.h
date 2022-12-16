#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_int.h"
#include "ap_fixed.h"
#include "nnet_utils/nnet_types.h"

//hls-fpga-machine-learning insert numbers
#define N_INPUT_1_1 784
#define N_LAYER_2 100
#define N_LAYER_5 100
#define N_LAYER_8 10

//hls-fpga-machine-learning insert layer-precision
typedef ap_fixed<16,6> model_default_t;
typedef ap_fixed<16,6> input_t;
typedef ap_fixed<16,6> layer2_t;
typedef ap_fixed<16,6> weight2_t;
typedef ap_fixed<16,6> bias2_t;
typedef ap_fixed<16,6,AP_RND,AP_SAT> layer4_t;
typedef ap_fixed<16,6> layer5_t;
typedef ap_fixed<16,6> weight5_t;
typedef ap_fixed<16,6> bias5_t;
typedef ap_fixed<16,6,AP_RND,AP_SAT> layer7_t;
typedef ap_fixed<9,6> layer8_t;
typedef ap_fixed<16,6> weight8_t;
typedef ap_fixed<16,6> bias8_t;
typedef ap_fixed<16,6,AP_RND,AP_SAT> layer9_t;
typedef ap_fixed<16,6> softmax_default_t;
typedef ap_fixed<16,6> result_t;

#endif
