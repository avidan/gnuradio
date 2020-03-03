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

#include <gnuradio/blocks/add_blk.h>

template<typename T>
void bind_add_template(py::module& m, const char *classname)
{
    using add_blk      = gr::blocks::add_blk<T>;

    py::class_<add_blk, gr::sync_block, std::shared_ptr<add_blk>>(m, classname)
        .def(py::init(&gr::blocks::add_blk<T>::make),
            py::arg("vlen") = 1
        )

        .def("to_basic_block",[](std::shared_ptr<add_blk> p){
            return p->to_basic_block();
        })
        ;
} 

void bind_add_blk(py::module& m)
{
    bind_add_template<std::int16_t>(m,"add_ss");
    bind_add_template<std::int32_t>(m,"add_ii");
    bind_add_template<float>(m,"add_ff");
    bind_add_template<gr_complex>(m,"add_cc");
} 
