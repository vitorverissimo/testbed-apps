/*									tab:4
 * Copyright (c) 2002 the University of Southern California.
 * All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose, without fee, and without written agreement is
 * hereby granted, provided that the above copyright notice and the following
 * two paragraphs appear in all copies of this software.
 *
 * IN NO EVENT SHALL THE UNIVERSITY OF SOUTHERN CALIFORNIA BE LIABLE TO ANY
 * PARTY FOR DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES
 * ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF THE
 * UNIVERSITY OF SOUTHERN CALIFORNIA HAS BEEN ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * THE UNIVERSITY OF SOUTHERN CALIFORNIA SPECIFICALLY DISCLAIMS ANY WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE UNIVERSITY OF SOUTHERN CALIFORNIA HAS NO
 * OBLIGATION TO PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR
 * MODIFICATIONS.
 *
 * Author:	Alex Hornung <ahornung@gmail.com>
 */

#ifndef __CSMAHEADTEST_CONFIG
#define __CSMAHEADTEST_CONFIG

#define NUM_NODES 9

/*
 * Send out a beacon every N sampling intervals
 */
#define SAMPLE_INTERVAL_TO_BEACON_RATIO 5

/*
 * Test time in ms (300000ms = 300s = 5min)
 */
#define TEST_TIME 300000

/*
 * Sampling interval in ms. Every SAMPLE_INTERVAL_MS, a new sampling period
 * starts. (~ 100ms / 10 Hz)
 */
#define SAMPLE_INTERVAL_JIFFIES	325000

/*
 * JIFFIES_PER_MS is the number of jiffies (clock interrupts) per ms. On the
 * imote2, the timer clock/osc runs at 3.25 MHz, so 1 ms are 3250 jiffies.
 * JIFFIES_PER_MS_F is the same number but as a floating point number to force
 * the compiler to cast other variables used in conjunction with this to
 * floating point variables.
 * This is platform dependant and is 3250 for the iMote2 platform.
 */
#define JIFFIES_PER_MS		3250
#define JIFFIES_PER_MS_F	3250.0

#endif  // __POLLHEADTEST_CONFIG
