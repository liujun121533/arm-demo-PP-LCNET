#ifndef TVMGEN_CLAS_H_
#define TVMGEN_CLAS_H_
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/*!
 * \brief Input tensor x size (in bytes) for TVM module "clas" 
 */
#define TVMGEN_CLAS_X_SIZE 602112
/*!
 * \brief Output tensor output size (in bytes) for TVM module "clas" 
 */
#define TVMGEN_CLAS_OUTPUT_SIZE 4000
/*!
 * \brief Input tensor pointers for TVM module "clas" 
 */
struct tvmgen_clas_inputs {
  void* x;
};

/*!
 * \brief Output tensor pointers for TVM module "clas" 
 */
struct tvmgen_clas_outputs {
  void* output;
};

/*!
 * \brief entrypoint function for TVM module "clas"
 * \param inputs Input tensors for the module 
 * \param outputs Output tensors for the module 
 */
int32_t tvmgen_clas_run(
  struct tvmgen_clas_inputs* inputs,
  struct tvmgen_clas_outputs* outputs
);
/*!
 * \brief Workspace size for TVM module "clas" 
 */
#define TVMGEN_CLAS_WORKSPACE_SIZE 2007104

#ifdef __cplusplus
}
#endif

#endif // TVMGEN_CLAS_H_
