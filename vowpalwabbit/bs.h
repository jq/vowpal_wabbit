/*
Copyright (c) by respective owners including Yahoo!, Microsoft, and
individual contributors. All rights reserved.  Released under a BSD
license as described in the file LICENSE.
 */
#ifndef BS_H
#define BS_H

#include "io_buf.h"
#include "parse_primitives.h"
#include "global_data.h"
#include "example.h"
#include "parse_args.h"
#include "v_hashmap.h"
#include "simple_label.h"

namespace BS
{
  learner setup(vw& all, std::vector<std::string>&, po::variables_map& vm, po::variables_map& vm_file);
  void print_result(int f, float res, float weight, v_array<char> tag, float lb, float ub);
  const label_parser simple_label = {default_simple_label, parse_simple_label, 
				   cache_simple_label, read_cached_simple_label, 
				   delete_simple_label, get_weight, get_initial, 
                                   NULL,
				   sizeof(label_data)};
  
  void output_example(vw& all, example* ec, float lb, float ub);
}

#endif
