/* sysprof-callgraph-frame-private.h
 *
 * Copyright 2023 Christian Hergert <chergert@redhat.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#pragma once

#include "sysprof-callgraph.h"
#include "sysprof-callgraph-frame.h"

G_BEGIN_DECLS

SysprofCallgraphFrame *_sysprof_callgraph_frame_new_for_node (SysprofCallgraph     *callgraph,
                                                              GObject              *owner,
                                                              SysprofCallgraphNode *node);

G_END_DECLS
