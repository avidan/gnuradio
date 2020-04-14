/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/pybind11.h>
#include <pybind11/complex.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/blocks/pack_k_bits_bb.h>

void bind_pack_k_bits_bb(py::module& m)
{
    using pack_k_bits_bb    = gr::blocks::pack_k_bits_bb;


    py::class_<pack_k_bits_bb,gr::sync_decimator, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<pack_k_bits_bb>>(m, "pack_k_bits_bb")

        .def(py::init(&pack_k_bits_bb::make),
           py::arg("k") 
        )
        ;


} 