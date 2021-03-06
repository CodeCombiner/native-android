/* @license
 * This file is part of the Game Closure SDK.
 *
 * The Game Closure SDK is free software: you can redistribute it and/or modify
 * it under the terms of the Mozilla Public License v. 2.0 as published by Mozilla.
 
 * The Game Closure SDK is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * Mozilla Public License v. 2.0 for more details.
 
 * You should have received a copy of the Mozilla Public License v. 2.0
 * along with the Game Closure SDK.  If not, see <http://mozilla.org/MPL/2.0/>.
 */
#ifndef JS_TIMESTEP_H
#define JS_TIMESTEP_H

#include "js/js.h"
#include "include/v8.h"
using namespace v8;

using v8::Local;
using v8::FunctionTemplate;
using v8::Object;

Local<FunctionTemplate> get_animate_class(Isolate *isolate);
void def_animate_cb(Local<Object> js_view, Local<Object> cb, double tt, double t, Isolate *isolate);
void def_animate_add_to_group(Local<Object> js_anim, Isolate *isolate);
void def_animate_remove_from_group(Local<Object> js_anim, Isolate *isolate);

#endif // JS_TIMESTEP_H
