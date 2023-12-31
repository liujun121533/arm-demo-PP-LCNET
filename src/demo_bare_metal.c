/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#include <stdio.h>
#include <tvm_runtime.h>
#include <tvmgen_clas.h>

#include "uart.h"

// Header files generated by convert_image.py
#include "inputs.h"
#include "outputs.h"
#include "labels.h"


int main(int argc, char** argv) {
  uart_init();
  printf("Starting image classification inference\n");
  struct tvmgen_clas_outputs clas_outputs = {
      .output = output,
  };
  struct tvmgen_clas_inputs clas_inputs = {
      .x = input,
  };

  tvmgen_clas_run(&clas_inputs, &clas_outputs);

  // post process
  int max_index = 0;
  float max_value = 0.f;
  
  for (int i = 0; i < output_len; i++) {
    max_index = output[i] > max_value ? i : max_index;
    max_value = output[max_index];
  }

  printf("The image has been classified as '%s', class_index is %d, max_value is %f\n", labels[max_index], max_index, max_value);
  
  // The FVP will shut down when it receives "EXITTHESIM" on the UART
  printf("EXITTHESIM\n");
  while (1 == 1)
    ;
  return 0;
}
