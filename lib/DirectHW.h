/*
 * DirectHW.h - userspace part for DirectHW
 *
 * Copyright © 2008-2010 coresystems GmbH <info@coresystems.de>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef __DIRECTHW_H
#define __DIRECTHW_H

#include <stddef.h>
#include <IOKit/IOKitLib.h>

int iopl(int unused);

unsigned char inb(unsigned short addr);
unsigned short inw(unsigned short addr);
unsigned int inl(unsigned short addr);

void outb(unsigned char val, unsigned short addr);
void outw(unsigned short val, unsigned short addr);
void outl(unsigned int val, unsigned short addr);

kern_return_t MyIOConnectCallStructMethod(
    io_connect_t    connect,
    unsigned int    index,
    void *          in,
    size_t          dataInLen,
    void *          out,
    size_t *        dataOutLen
);

#endif
