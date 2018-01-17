/*
 * -*- coding: utf-8 -*- {{{
 * vim: set fenc=utf-8 ft=python sw=4 ts=4 sts=4 et:
 *
 * Copyright 2018, Kisensum.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Neither Kisensum, nor any of its employees, nor any jurisdiction or
 * organization that has cooperated in the development of these materials,
 * makes any warranty, express or implied, or assumes any legal liability
 * or responsibility for the accuracy, completeness, or usefulness or any
 * information, apparatus, product, software, or process disclosed, or
 * represents that its use would not infringe privately owned rights.
 * Reference herein to any specific commercial product, process, or service
 * by trade name, trademark, manufacturer, or otherwise does not necessarily
 * constitute or imply its endorsement, recommendation, or favoring by Kisensum.
 * }}}
 */

#include <pybind11/pybind11.h>
#include <python2.7/Python.h>

#include <opendnp3/gen/KeyChangeMethod.h>

namespace py = pybind11;
using namespace std;

void bind_KeyChangeMethod(py::module &m)
{
    // ----- enum class: opendnp3::KeyChangeMethod -----
    py::enum_<opendnp3::KeyChangeMethod>(m, "KeyChangeMethod",
        "Enumerates possible algorithms for changing the update key.")

        .value("AES_128_SHA1_HMAC", opendnp3::KeyChangeMethod::AES_128_SHA1_HMAC)
		.value("AES_256_SHA256_HMAC", opendnp3::KeyChangeMethod::AES_256_SHA256_HMAC)
		.value("AES_256_AES_GMAC", opendnp3::KeyChangeMethod::AES_256_AES_GMAC)
		.value("RSA_1024_DSA_SHA1_HMAC_SHA1", opendnp3::KeyChangeMethod::RSA_1024_DSA_SHA1_HMAC_SHA1)
		.value("RSA_2048_DSA_SHA256_HMAC_SHA256", opendnp3::KeyChangeMethod::RSA_2048_DSA_SHA256_HMAC_SHA256)
		.value("RSA_3072_DSA_SHA256_HMAC_SHA256", opendnp3::KeyChangeMethod::RSA_3072_DSA_SHA256_HMAC_SHA256)
		.value("RSA_2048_DSA_SHA256_AES_GMAC", opendnp3::KeyChangeMethod::RSA_2048_DSA_SHA256_AES_GMAC)
		.value("RSA_3072_DSA_SHA256_AES_GMAC", opendnp3::KeyChangeMethod::RSA_3072_DSA_SHA256_AES_GMAC)
		.value("UNDEFINED", opendnp3::KeyChangeMethod::UNDEFINED);

    // ----- function: opendnp3::KeyChangeMethodToType -----
    m.def(
        "KeyChangeMethodToType",
        &opendnp3::KeyChangeMethodToType
    );

    // ----- function: opendnp3::KeyChangeMethodFromType -----
    m.def(
        "KeyChangeMethodFromType",
        &opendnp3::KeyChangeMethodFromType,
        ":type rawType: unsigned char",
        py::arg("rawType")
    );

    // ----- function: opendnp3::KeyChangeMethodToString -----
    m.def(
        "KeyChangeMethodToString",
        &opendnp3::KeyChangeMethodToString
    );
}