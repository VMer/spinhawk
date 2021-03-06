/* CRYPTO.H     (c) Copyright Jan Jaeger, 2000-2009                  */
/*              Cryptographic instructions                           */

#if defined(_FEATURE_MESSAGE_SECURITY_ASSIST)

#ifndef _CRYPTO_C_
#ifndef _HENGINE_DLL_
#define CRY_DLL_IMPORT DLL_IMPORT
#else   /* _HDASD_DLL_ */
#define CRY_DLL_IMPORT extern
#endif  /* _HDASD_DLL_ */
#else
#define CRY_DLL_IMPORT DLL_EXPORT
#endif

CRY_DLL_IMPORT void (ATTR_REGPARM(2) *ARCH_DEP(cipher_message                                ))(BYTE*, REGS*);
CRY_DLL_IMPORT void (ATTR_REGPARM(2) *ARCH_DEP(cipher_message_with_chaining                  ))(BYTE*, REGS*);
CRY_DLL_IMPORT void (ATTR_REGPARM(2) *ARCH_DEP(cipher_message_with_cipher_feedback           ))(BYTE*, REGS*);
CRY_DLL_IMPORT void (ATTR_REGPARM(2) *ARCH_DEP(cipher_message_with_counter                   ))(BYTE*, REGS*);
CRY_DLL_IMPORT void (ATTR_REGPARM(2) *ARCH_DEP(cipher_message_with_output_feedback           ))(BYTE*, REGS*);
CRY_DLL_IMPORT void (ATTR_REGPARM(2) *ARCH_DEP(compute_intermediate_message_digest           ))(BYTE*, REGS*);
CRY_DLL_IMPORT void (ATTR_REGPARM(2) *ARCH_DEP(compute_last_message_digest                   ))(BYTE*, REGS*);
CRY_DLL_IMPORT void (ATTR_REGPARM(2) *ARCH_DEP(compute_message_authentication_code           ))(BYTE*, REGS*);
CRY_DLL_IMPORT void (ATTR_REGPARM(2) *ARCH_DEP(perform_cryptographic_computation             ))(BYTE*, REGS*);
CRY_DLL_IMPORT void (ATTR_REGPARM(2) *ARCH_DEP(perform_cryptographic_key_management_operation))(BYTE*, REGS*);

#endif /*defined(_FEATURE_MESSAGE_SECURITY_ASSIST)*/
