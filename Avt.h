/*
 * Copyright (c) 2013, EGE University, Izmir, Turkey
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 * - Neither the name of the copyright holders nor the names of
 *   its contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 */
 
/*
 * @author: K. Sinan YILDIRIM (sinanyil81@gmail.com)
 */

#if defined(AVT_H)
#else
#define AVT_H

	/* feedback definitions */
	enum {
	    FEEDBACK_GREATER = 0,
	    FEEDBACK_LOWER = 1,
	    FEEDBACK_GOOD = 2,
	    FEEDBACK_NONE = 3,
	};
	/* ---------------------------------- */
	
	/* delta step parameters */
	#define INCREASE_FACTOR 2.0f
	#define DECREASE_FACTOR 3.0f
	/* ---------------------------------- */

    /* adaptive value tracking parameters */ 
   	#define MIN_DELTA 0.00000000001f
   	#define MAX_DELTA 0.00001f
    #define INITIAL_DELTA 0.00001f	
    #define UPPER_BOUND 0.0001f
    #define LOWER_BOUND	-0.0001f
    #define INITIAL_VALUE 0.0f
    /* ---------------------------------- */

#endif
