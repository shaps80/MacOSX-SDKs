#ifndef	_telemetry_notification_server_
#define	_telemetry_notification_server_

/* Module telemetry_notification */

#include <string.h>
#include <mach/ndr.h>
#include <mach/boolean.h>
#include <mach/kern_return.h>
#include <mach/notify.h>
#include <mach/mach_types.h>
#include <mach/message.h>
#include <mach/mig_errors.h>
#include <mach/port.h>

#ifdef AUTOTEST
#ifndef FUNCTION_PTR_T
#define FUNCTION_PTR_T
typedef void (*function_ptr_t)(mach_port_t, char *, mach_msg_type_number_t);
typedef struct {
        char            *name;
        function_ptr_t  function;
} function_table_entry;
typedef function_table_entry   *function_table_t;
#endif /* FUNCTION_PTR_T */
#endif /* AUTOTEST */

#ifndef	telemetry_notification_MSG_COUNT
#define	telemetry_notification_MSG_COUNT	1
#endif	/* telemetry_notification_MSG_COUNT */

#include <mach/std_types.h>
#include <mach/mig.h>
#include <mach/mig.h>
#include <mach/mach_types.h>

#ifdef __BeforeMigServerHeader
__BeforeMigServerHeader
#endif /* __BeforeMigServerHeader */


/* SimpleRoutine telemetry_notification */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t telemetry_notification
(
	mach_port_t telemetry_port,
	uint32_t flags
);

#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
boolean_t telemetry_notification_server(
		mach_msg_header_t *InHeadP,
		mach_msg_header_t *OutHeadP);

#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
mig_routine_t telemetry_notification_server_routine(
		mach_msg_header_t *InHeadP);


/* Description of this subsystem, for use in direct RPC */
extern const struct telemetry_notification_subsystem {
	mig_server_routine_t	server;	/* Server routine */
	mach_msg_id_t	start;	/* Min routine number */
	mach_msg_id_t	end;	/* Max routine number + 1 */
	unsigned int	maxsize;	/* Max msg size */
	vm_address_t	reserved;	/* Reserved */
	struct routine_descriptor	/*Array of routine descriptors */
		routine[1];
} telemetry_notification_subsystem;

/* typedefs for all requests */

#ifndef __Request__telemetry_notification_subsystem__defined
#define __Request__telemetry_notification_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint32_t flags;
	} __Request__telemetry_notification_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Request__telemetry_notification_subsystem__defined */


/* union of all requests */

#ifndef __RequestUnion__telemetry_notification_subsystem__defined
#define __RequestUnion__telemetry_notification_subsystem__defined
union __RequestUnion__telemetry_notification_subsystem {
	__Request__telemetry_notification_t Request_telemetry_notification;
};
#endif /* __RequestUnion__telemetry_notification_subsystem__defined */
/* typedefs for all replies */

#ifndef __Reply__telemetry_notification_subsystem__defined
#define __Reply__telemetry_notification_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__telemetry_notification_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Reply__telemetry_notification_subsystem__defined */


/* union of all replies */

#ifndef __ReplyUnion__telemetry_notification_subsystem__defined
#define __ReplyUnion__telemetry_notification_subsystem__defined
union __ReplyUnion__telemetry_notification_subsystem {
	__Reply__telemetry_notification_t Reply_telemetry_notification;
};
#endif /* __RequestUnion__telemetry_notification_subsystem__defined */

#ifndef subsystem_to_name_map_telemetry_notification
#define subsystem_to_name_map_telemetry_notification \
    { "telemetry_notification", 5100 }
#endif

#ifdef __AfterMigServerHeader
__AfterMigServerHeader
#endif /* __AfterMigServerHeader */

#endif	 /* _telemetry_notification_server_ */
