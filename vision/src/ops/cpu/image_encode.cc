// Copyright 2022 ByteDance Ltd. and/or its affiliates.
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
#include "matxscript/runtime/native_object_registry.h"
#include "matxscript/runtime/py_args.h"
#include "ops/base/vision_base_op.h"
#include "vision_base_op_cpu.h"

namespace byted_matx_vision {
namespace ops {
using namespace ::matxscript::runtime;

class VisionImencodeGeneralOp : public VisionBaseOp {
 public:
  VisionImencodeGeneralOp(PyArgs args) : VisionBaseOp(args, "VisionImencodeOp") {
  }
  ~VisionImencodeGeneralOp() = default;
};

MATX_REGISTER_NATIVE_OBJECT(VisionImencodeGeneralOp)
    .SetConstructor([](PyArgs args) -> std::shared_ptr<void> {
      return std::make_shared<VisionImencodeGeneralOp>(args);
    })
    .RegisterFunction("process", [](void* self, PyArgs args) -> RTValue {
      return reinterpret_cast<VisionImencodeGeneralOp*>(self)->process(args);
    });

class VisionImencodeNoExceptionOpGeneralOp : public VisionBaseOp {
 public:
  VisionImencodeNoExceptionOpGeneralOp(PyArgs args)
      : VisionBaseOp(args, "VisionImencodeNoExceptionOp") {
  }
  ~VisionImencodeNoExceptionOpGeneralOp() = default;
};

MATX_REGISTER_NATIVE_OBJECT(VisionImencodeNoExceptionOpGeneralOp)
    .SetConstructor([](PyArgs args) -> std::shared_ptr<void> {
      return std::make_shared<VisionImencodeNoExceptionOpGeneralOp>(args);
    })
    .RegisterFunction("process", [](void* self, PyArgs args) -> RTValue {
      return reinterpret_cast<VisionImencodeNoExceptionOpGeneralOp*>(self)->process(args);
    });

}  // namespace ops
}  // namespace byted_matx_vision