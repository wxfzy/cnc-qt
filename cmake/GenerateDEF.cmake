MACRO(CNCQT_GENERATE_DEF_FILE TARGET_NAME)
    IF(MSVC)
        ADD_DEPENDENCIES(${TARGET_NAME} cncqt-gendef)
        GET_TARGET_PROPERTY(gendef_EXE cncqt-gendef LOCATION) 
        ADD_CUSTOM_COMMAND(TARGET ${TARGET_NAME}
            PRE_LINK
            COMMAND ${gendef_EXE} $(IntDir)\\$(InputName).def $(TargetFileName) $(IntDir)\\*.obj)
        SET_TARGET_PROPERTIES(${TARGET_NAME} PROPERTIES LINK_FLAGS "/DEF:$(IntDir)\\$(InputName).def")
    ENDIF(MSVC)
ENDMACRO(CNCQT_GENERATE_DEF_FILE)

