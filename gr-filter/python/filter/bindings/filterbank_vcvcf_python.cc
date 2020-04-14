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

#include <gnuradio/filter/filterbank_vcvcf.h>
// pydoc.h is automatically generated in the build directory
#include <filterbank_vcvcf_pydoc.h>

void bind_filterbank_vcvcf(py::module& m)
{
    using filterbank_vcvcf    = gr::filter::filterbank_vcvcf;



    py::class_<filterbank_vcvcf, gr::block, gr::basic_block,
        std::shared_ptr<filterbank_vcvcf>>(m, "filterbank_vcvcf", D(filterbank_vcvcf))

        .def(py::init(&filterbank_vcvcf::make),
           py::arg("taps"),
           D(filterbank_vcvcf,make)
        )
        

        .def("set_taps",&filterbank_vcvcf::set_taps,
            py::arg("taps"),
            D(filterbank_vcvcf,set_taps)
        )


        .def("print_taps",&filterbank_vcvcf::print_taps,
            D(filterbank_vcvcf,print_taps)
        )


        .def("taps",&filterbank_vcvcf::taps,
            D(filterbank_vcvcf,taps)
        )

        ;


} 