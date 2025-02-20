#ifndef THC_GENERIC_FILE
#define THC_GENERIC_FILE "THCUNN/generic/THCUNN.h"
#else

#include <ATen/core/Reduction.h>
#include <ATen/Generator.h>

TORCH_CUDA_CU_API void THNN_(MultiMarginCriterion_updateOutput)(
    THCState* state,
    THCTensor* input,
    THCIndexTensor* target,
    THCTensor* output,
    int64_t reduction,
    int p,
    THCTensor* weights, // [OPTIONAL]
    accreal margin);

TORCH_CUDA_CU_API void THNN_(MultiMarginCriterion_updateGradInput)(
    THCState* state,
    THCTensor* input,
    THCIndexTensor* target,
    THCTensor* gradOutput,
    THCTensor* gradInput,
    int64_t reduction,
    int p,
    THCTensor* weights, // [OPTIONAL]
    accreal margin);

TORCH_CUDA_CU_API void THNN_(SpatialConvolutionMM_updateOutput)(
    THCState* state,
    THCTensor* input,
    THCTensor* output,
    THCTensor* weight,
    THCTensor* bias, // [OPTIONAL]
    THCTensor* columns,
    THCTensor* ones,
    int kW,
    int kH,
    int dW,
    int dH,
    int padW,
    int padH);

TORCH_CUDA_CU_API void THNN_(SpatialConvolutionMM_updateGradInput)(
    THCState* state,
    THCTensor* input,
    THCTensor* gradOutput,
    THCTensor* gradInput,
    THCTensor* weight,
    THCTensor* columns,
    THCTensor* ones,
    int kW,
    int kH,
    int dW,
    int dH,
    int padW,
    int padH);

TORCH_CUDA_CU_API void THNN_(SpatialConvolutionMM_accGradParameters)(
    THCState* state,
    THCTensor* input,
    THCTensor* gradOutput,
    THCTensor* gradWeight,
    THCTensor* gradBias, // [OPTIONAL]
    THCTensor* columns,
    THCTensor* ones,
    int kW,
    int kH,
    int dW,
    int dH,
    int padW,
    int padH,
    accreal scale);

#endif
