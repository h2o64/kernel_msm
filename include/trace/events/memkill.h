#undef TRACE_SYSTEM
#define TRACE_SYSTEM memkill

#if !defined(_TRACE_MEMKILL_H) || defined(TRACE_HEADER_MULTI_READ)
#define _TRACE_MEMKILL_H

#if BITS_PER_LONG == 32
#define INT_DIGITS	(10)
#else
#define INT_DIGITS	(20)
#endif
/* "NODE_ID:ZONE_ID:NR_FREE:NR_FILE " */
#define ZINFO_DIGITS	((INT_DIGITS + 1) * 4)	/* end with ignorable ' ' */
#define ZINFO_LENGTH	(ZINFO_DIGITS * MAX_NR_ZONES * MAX_NUMNODES)

#endif /* _TRACE_MEMKILL_H */

/* This part must be outside protection */
#include <trace/define_trace.h>
