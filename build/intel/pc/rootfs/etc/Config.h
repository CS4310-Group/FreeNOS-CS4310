#ifndef __BUILD_INTEL_PC_INCLUDE_CONFIG_H
#define __BUILD_INTEL_PC_INCLUDE_CONFIG_H

#define VERSION_GET_CODE(a,b,c) (((a) << 16) + ((b) << 8) + (c))
#define DATETIME  __DATE__ " " __TIME__
#define COPYRIGHT "Copyright (C) 2023 Niek Linnenbank\r\n" \
"This is free software; see the source for copying conditions.  There is NO\r\n" \
"warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE\r\n"
#define BANNER "FreeNOS " RELEASE " [" ARCH "/" SYSTEM "] (" BUILDUSER "@" BUILDHOST ") (" COMPILER_VERSION ") " DATETIME "\r\n" 
#define SCANNERS ""
#define CONFIGUREDIR "#/.sconf_temp"
#define CONFIGURELOG "#/config.log"
#define CPPSUFFIXES ".c .C .cxx .cpp .c++ .cc .h .H .hxx .hpp .hh .F .fpp .FPP .m .mm .S .spp .SPP .sx "
#define DSUFFIXES ".d "
#define IDLSUFFIXES ".idl .IDL "
#define _LIBFLAGS "${_stripixes(LIBLINKPREFIX, LIBS, LIBLINKSUFFIX, LIBPREFIXES, LIBSUFFIXES, __env__)}"
#define _LIBDIRFLAGS "$( ${_concat(LIBDIRPREFIX, LIBPATH, LIBDIRSUFFIX, __env__, RDirs, TARGET, SOURCE)} $)"
#define _CPPINCFLAGS "$( ${_concat(INCPREFIX, CPPPATH, INCSUFFIX, __env__, RDirs, TARGET, SOURCE)} $)"
#define _CPPDEFFLAGS "${_defines(CPPDEFPREFIX, CPPDEFINES, CPPDEFSUFFIX, __env__)}"
#define __SHLIBVERSIONFLAGS "${__libversionflags(__env__,\"SHLIBVERSION\",\"_SHLIBVERSIONFLAGS\")}"
#define __LDMODULEVERSIONFLAGS "${__libversionflags(__env__,\"LDMODULEVERSION\",\"_LDMODULEVERSIONFLAGS\")}"
#define __DSHLIBVERSIONFLAGS "${__libversionflags(__env__,\"DSHLIBVERSION\",\"_DSHLIBVERSIONFLAGS\")}"
#define TEMPFILEARGJOIN ""
#define PLATFORM "posix"
#define OBJPREFIX ""
#define OBJSUFFIX ".o"
#define SHOBJPREFIX "$OBJPREFIX"
#define SHOBJSUFFIX ".os"
#define PROGPREFIX ""
#define PROGSUFFIX ""
#define LIBPREFIX "lib"
#define LIBSUFFIX ".a"
#define SHLIBPREFIX "$LIBPREFIX"
#define SHLIBSUFFIX ".so"
#define LIBPREFIXES "$LIBPREFIX "
#define LIBSUFFIXES "$LIBSUFFIX $SHLIBSUFFIX "
#define SHELL "/bin/bash"
#define TEMPFILEPREFIX "@"
#define MAXLINELENGTH 128072
#define __RPATH "$_RPATH"
#define __DRPATH "$_DRPATH"
#define TOOLPATH "support/scons "
#define TOOLS "default gnulink gcc g++ gfortran gas ar dmd filesystem rpcgen jar javac rmic dvipdf gs tar zip textfile phony test default gnulink gcc g++ gfortran gas ar dmd filesystem rpcgen jar javac rmic dvipdf gs tar zip textfile bootimage iso binary linn phony strip test lz4 "
#define WIXCANDLE "candle.exe"
#define WIXLIGHT "light.exe"
#define SHLINK "$LINK"
#define SHLINKCOM "$SHLINK -o $TARGET $SHLINKFLAGS $__SHLIBVERSIONFLAGS $__RPATH $SOURCES $_LIBDIRFLAGS $_LIBFLAGS"
#define SHLIBEMITTER ""
#define LINK "$SMARTLINK"
#define LINKFLAGS "-m32 -mtune=i686 -static -nostdlib -nostartfiles -nodefaultlibs -Wl,--gc-sections -T config/intel/pc/user.ld "
#define LINKCOM "$LINK -o $TARGET $LINKFLAGS -Wl,--start-group -lgcc $__RPATH $SOURCES $_LIBDIRFLAGS $_LIBFLAGS -Wl,--end-group"
#define LIBDIRPREFIX "-L"
#define LIBDIRSUFFIX ""
#define LIBLINKPREFIX "-l"
#define LIBLINKSUFFIX ""
#define LDMODULE "$SHLINK"
#define LDMODULEEMITTER ""
#define LDMODULEPREFIX "$SHLIBPREFIX"
#define LDMODULESUFFIX "$SHLIBSUFFIX"
#define LDMODULEFLAGS "$SHLINKFLAGS"
#define LDMODULECOM "$LDMODULE -o $TARGET $LDMODULEFLAGS $__LDMODULEVERSIONFLAGS $__RPATH $SOURCES $_LIBDIRFLAGS $_LIBFLAGS"
#define LDMODULEVERSION "$SHLIBVERSION"
#define LDMODULENOVERSIONSYMLINKS "$SHLIBNOVERSIONSYMLINKS"
#define RPATHPREFIX "-Wl,-rpath="
#define RPATHSUFFIX ""
#define _RPATH "${_concat(RPATHPREFIX, RPATH, RPATHSUFFIX, __env__)}"
#define _SHLIBVERSIONFLAGS "$SHLIBVERSIONFLAGS -Wl,-soname=$_SHLIBSONAME"
#define _LDMODULEVERSIONFLAGS "$LDMODULEVERSIONFLAGS -Wl,-soname=$_LDMODULESONAME"
#define _SHLIBSONAME "${ShLibSonameGenerator(__env__,TARGET)}"
#define _LDMODULESONAME "${LdModSonameGenerator(__env__,TARGET)}"
#define LDMODULEVERSIONFLAGS "$SHLIBVERSIONFLAGS"
#define CC "gcc"
#define _CCCOMCOM "$CPPFLAGS $_CPPDEFFLAGS $_CPPINCFLAGS"
#define CCFLAGS "-m32 -mtune=i686 "
#define CCCOM "$CC -o $TARGET -c $CFLAGS $CCFLAGS $_CCCOMCOM $SOURCES"
#define SHCC "$CC"
#define SHCCCOM "$SHCC -o $TARGET -c $SHCFLAGS $SHCCFLAGS $_CCCOMCOM $SOURCES"
#define CPPDEFPREFIX "-D"
#define CPPDEFSUFFIX ""
#define INCPREFIX "-I"
#define INCSUFFIX ""
#define STATIC_AND_SHARED_OBJECTS_ARE_THE_SAME 0
#define CFILESUFFIX ".c"
#define CCVERSION "9.4.0"
#define CXX "g++"
#define CXXFLAGS "-m32 -mtune=i686 -Ilib/libstd -include lib/liballoc/Allocator.h "
#define CXXCOM "$CXX -o $TARGET -c $CXXFLAGS $CCFLAGS $_CCCOMCOM $SOURCES"
#define SHCXX "$CXX"
#define SHCXXCOM "$SHCXX -o $TARGET -c $SHCXXFLAGS $SHCCFLAGS $_CCCOMCOM $SOURCES"
#define CXXFILESUFFIX ".cc"
#define CXXVERSION "9.4.0"
#define FORTRANSUFFIXES ".f .for .ftn .fpp .FPP .F .FOR .FTN .f77 .F77 .f90 .F90 .f95 .F95 .f03 .F03 .f08 .F08 "
#define INCFORTRANPREFIX "-I"
#define INCFORTRANSUFFIX ""
#define _FORTRANINCFLAGS "$( ${_concat(INCFORTRANPREFIX, FORTRANPATH, INCFORTRANSUFFIX, __env__, RDirs, TARGET, SOURCE)} $)"
#define FORTRANCOM "$FORTRAN -o $TARGET -c $FORTRANFLAGS $_FORTRANINCFLAGS $_FORTRANMODFLAG $SOURCES"
#define FORTRANPPCOM "$FORTRAN -o $TARGET -c $FORTRANFLAGS $CPPFLAGS $_CPPDEFFLAGS $_FORTRANINCFLAGS $_FORTRANMODFLAG $SOURCES"
#define SHFORTRANCOM "$SHFORTRAN -o $TARGET -c $SHFORTRANFLAGS $_FORTRANINCFLAGS $_FORTRANMODFLAG $SOURCES"
#define SHFORTRANPPCOM "$SHFORTRAN -o $TARGET -c $SHFORTRANFLAGS $CPPFLAGS $_CPPDEFFLAGS $_FORTRANINCFLAGS $_FORTRANMODFLAG $SOURCES"
#define FORTRANMODPREFIX ""
#define FORTRANMODSUFFIX ".mod"
#define FORTRANMODDIR ""
#define FORTRANMODDIRPREFIX "-J"
#define FORTRANMODDIRSUFFIX ""
#define _FORTRANMODFLAG "$( ${_concat(FORTRANMODDIRPREFIX, FORTRANMODDIR, FORTRANMODDIRSUFFIX, __env__, RDirs, TARGET, SOURCE)} $)"
#define INCF77PREFIX "-I"
#define INCF77SUFFIX ""
#define _F77INCFLAGS "$( ${_concat(INCF77PREFIX, F77PATH, INCF77SUFFIX, __env__, RDirs, TARGET, SOURCE)} $)"
#define F77COM "$F77 -o $TARGET -c $F77FLAGS $_F77INCFLAGS $SOURCES"
#define F77PPCOM "$F77 -o $TARGET -c $F77FLAGS $CPPFLAGS $_CPPDEFFLAGS $_F77INCFLAGS $SOURCES"
#define SHF77COM "$SHF77 -o $TARGET -c $SHF77FLAGS $_F77INCFLAGS $SOURCES"
#define SHF77PPCOM "$SHF77 -o $TARGET -c $SHF77FLAGS $CPPFLAGS $_CPPDEFFLAGS $_F77INCFLAGS $SOURCES"
#define INCF90PREFIX "-I"
#define INCF90SUFFIX ""
#define _F90INCFLAGS "$( ${_concat(INCF90PREFIX, F90PATH, INCF90SUFFIX, __env__, RDirs, TARGET, SOURCE)} $)"
#define F90COM "$F90 -o $TARGET -c $F90FLAGS $_F90INCFLAGS $_FORTRANMODFLAG $SOURCES"
#define F90PPCOM "$F90 -o $TARGET -c $F90FLAGS $CPPFLAGS $_CPPDEFFLAGS $_F90INCFLAGS $_FORTRANMODFLAG $SOURCES"
#define SHF90COM "$SHF90 -o $TARGET -c $SHF90FLAGS $_F90INCFLAGS $_FORTRANMODFLAG $SOURCES"
#define SHF90PPCOM "$SHF90 -o $TARGET -c $SHF90FLAGS $CPPFLAGS $_CPPDEFFLAGS $_F90INCFLAGS $_FORTRANMODFLAG $SOURCES"
#define INCF95PREFIX "-I"
#define INCF95SUFFIX ""
#define _F95INCFLAGS "$( ${_concat(INCF95PREFIX, F95PATH, INCF95SUFFIX, __env__, RDirs, TARGET, SOURCE)} $)"
#define F95COM "$F95 -o $TARGET -c $F95FLAGS $_F95INCFLAGS $_FORTRANMODFLAG $SOURCES"
#define F95PPCOM "$F95 -o $TARGET -c $F95FLAGS $CPPFLAGS $_CPPDEFFLAGS $_F95INCFLAGS $_FORTRANMODFLAG $SOURCES"
#define SHF95COM "$SHF95 -o $TARGET -c $SHF95FLAGS $_F95INCFLAGS $_FORTRANMODFLAG $SOURCES"
#define SHF95PPCOM "$SHF95 -o $TARGET -c $SHF95FLAGS $CPPFLAGS $_CPPDEFFLAGS $_F95INCFLAGS $_FORTRANMODFLAG $SOURCES"
#define INCF03PREFIX "-I"
#define INCF03SUFFIX ""
#define _F03INCFLAGS "$( ${_concat(INCF03PREFIX, F03PATH, INCF03SUFFIX, __env__, RDirs, TARGET, SOURCE)} $)"
#define F03COM "$F03 -o $TARGET -c $F03FLAGS $_F03INCFLAGS $_FORTRANMODFLAG $SOURCES"
#define F03PPCOM "$F03 -o $TARGET -c $F03FLAGS $CPPFLAGS $_CPPDEFFLAGS $_F03INCFLAGS $_FORTRANMODFLAG $SOURCES"
#define SHF03COM "$SHF03 -o $TARGET -c $SHF03FLAGS $_F03INCFLAGS $_FORTRANMODFLAG $SOURCES"
#define SHF03PPCOM "$SHF03 -o $TARGET -c $SHF03FLAGS $CPPFLAGS $_CPPDEFFLAGS $_F03INCFLAGS $_FORTRANMODFLAG $SOURCES"
#define INCF08PREFIX "-I"
#define INCF08SUFFIX ""
#define _F08INCFLAGS "$( ${_concat(INCF08PREFIX, F08PATH, INCF08SUFFIX, __env__, RDirs, TARGET, SOURCE)} $)"
#define F08COM "$F08 -o $TARGET -c $F08FLAGS $_F08INCFLAGS $_FORTRANMODFLAG $SOURCES"
#define F08PPCOM "$F08 -o $TARGET -c $F08FLAGS $CPPFLAGS $_CPPDEFFLAGS $_F08INCFLAGS $_FORTRANMODFLAG $SOURCES"
#define SHF08COM "$SHF08 -o $TARGET -c $SHF08FLAGS $_F08INCFLAGS $_FORTRANMODFLAG $SOURCES"
#define SHF08PPCOM "$SHF08 -o $TARGET -c $SHF08FLAGS $CPPFLAGS $_CPPDEFFLAGS $_F08INCFLAGS $_FORTRANMODFLAG $SOURCES"
#define SHFORTRAN "$FORTRAN"
#define FORTRAN "gfortran"
#define F77 "gfortran"
#define SHF77 "$F77"
#define F90 "gfortran"
#define SHF90 "$F90"
#define F95 "gfortran"
#define SHF95 "$F95"
#define F03 "gfortran"
#define SHF03 "$F03"
#define F08 "gfortran"
#define SHF08 "$F08"
#define AS "gcc"
#define ASFLAGS "-m32 -mtune=i686 -Wall -nostdinc "
#define ASCOM "$AS $ASFLAGS -o $TARGET $SOURCES"
#define ASPPFLAGS "$ASFLAGS"
#define ASPPCOM "$CC $ASPPFLAGS $CPPFLAGS $_CPPDEFFLAGS $_CPPINCFLAGS -c -o $TARGET $SOURCES"
#define AR "ar"
#define ARCOM "$AR $ARFLAGS $TARGET $SOURCES"
#define RANLIB "ranlib"
#define RANLIBCOM "$RANLIB $RANLIBFLAGS $TARGET"
#define DC "dmd"
#define DCOM "$DC $_DINCFLAGS $_DVERFLAGS $_DDEBUGFLAGS $_DFLAGS -c -of$TARGET $SOURCES"
#define _DINCFLAGS "${_concat(DINCPREFIX, DPATH, DINCSUFFIX, __env__, RDirs, TARGET, SOURCE)}"
#define _DVERFLAGS "${_concat(DVERPREFIX, DVERSIONS, DVERSUFFIX, __env__)}"
#define _DDEBUGFLAGS "${_concat(DDEBUGPREFIX, DDEBUG, DDEBUGSUFFIX, __env__)}"
#define _DFLAGS "${_concat(DFLAGPREFIX, DFLAGS, DFLAGSUFFIX, __env__)}"
#define SHDC "$DC"
#define SHDCOM "$DC $_DINCFLAGS $_DVERFLAGS $_DDEBUGFLAGS $_DFLAGS -c -fPIC -of$TARGET $SOURCES"
#define DPATH "#/ "
#define DFLAGS ""
#define DVERSIONS ""
#define DDEBUG ""
#define DINCPREFIX "-I"
#define DINCSUFFIX ""
#define DVERPREFIX "-version="
#define DVERSUFFIX ""
#define DDEBUGPREFIX "-debug="
#define DDEBUGSUFFIX ""
#define DFLAGPREFIX "-"
#define DFLAGSUFFIX ""
#define DFILESUFFIX ".d"
#define DLINK "$DC"
#define DLINKCOM "$DLINK -of$TARGET $DLINKFLAGS $__DRPATH $SOURCES $_DLIBDIRFLAGS $_DLIBFLAGS"
#define SHDLINK "$DC"
#define SHDLINKCOM "$DLINK -of$TARGET $SHDLINKFLAGS $__SHDLIBVERSIONFLAGS $__DRPATH $SOURCES $_DLIBDIRFLAGS $_DLIBFLAGS"
#define DLIBLINKPREFIX "-L-l"
#define DLIBLINKSUFFIX ""
#define _DLIBFLAGS "${_stripixes(DLIBLINKPREFIX, LIBS, DLIBLINKSUFFIX, LIBPREFIXES, LIBSUFFIXES,  __env__)}"
#define DLIBDIRPREFIX "-L-L"
#define DLIBDIRSUFFIX ""
#define _DLIBDIRFLAGS "${_concat(DLIBDIRPREFIX, LIBPATH, DLIBDIRSUFFIX, __env__, RDirs, TARGET, SOURCE)}"
#define DLIB "ar cr"
#define DLIBCOM "$DLIB $_DLIBFLAGS $TARGET $SOURCES $_DLIBFLAGS"
#define DLIBFLAGPREFIX "-"
#define DLIBFLAGSUFFIX ""
#define DRPATHPREFIX "-L-rpath="
#define DRPATHSUFFIX ""
#define _DRPATH "${_concat(DRPATHPREFIX, RPATH, DRPATHSUFFIX, __env__)}"
#define _SHDLIBVERSIONFLAGS "$SHDLIBVERSIONFLAGS -L-soname=$_SHDLIBSONAME"
#define _SHDLIBSONAME "${DShLibSonameGenerator(__env__,TARGET)}"
#define SHDLIBVERSION "$SHLIBVERSION"
#define SHDLIBVERSIONFLAGS ""
#define COPYSTR "Copy file(s): \"$SOURCES\" to \"$TARGETS\""
#define RPCGEN "rpcgen"
#define JAVASUFFIX ".java"
#define JAR "jar"
#define _JARCOM "$JAR $_JARFLAGS $TARGET $_JARMANIFEST $_JARSOURCES"
#define JARCOM "${TEMPFILE('$_JARCOM','$JARCOMSTR')}"
#define JARSUFFIX ".jar"
#define JAVAINCLUDES ""
#define JAVAC "javac"
#define JAVABOOTCLASSPATH ""
#define JAVACLASSPATH ""
#define JAVASOURCEPATH ""
#define _JAVABOOTCLASSPATH "${_javapathopt(\"-bootclasspath\", \"JAVABOOTCLASSPATH\")}"
#define _JAVACLASSPATH "${_javapathopt(\"-classpath\", \"JAVACLASSPATH\")}"
#define _JAVASOURCEPATH "${_javapathopt(\"-sourcepath\", \"JAVASOURCEPATH\", \"_JAVASOURCEPATHDEFAULT\")}"
#define _JAVASOURCEPATHDEFAULT "${TARGET.attributes.java_sourcedir}"
#define _JAVACCOM "$JAVAC $JAVACFLAGS $_JAVABOOTCLASSPATH $_JAVACLASSPATH -d ${TARGET.attributes.java_classdir} $_JAVASOURCEPATH $SOURCES"
#define JAVACCOM "${TEMPFILE('$_JAVACCOM','$JAVACCOMSTR')}"
#define JAVACLASSSUFFIX ".class"
#define RMIC "rmic"
#define RMICCOM "$RMIC $RMICFLAGS -d ${TARGET.attributes.java_lookupdir} -classpath ${SOURCE.attributes.java_classdir} ${SOURCES.attributes.java_classname}"
#define PDFPREFIX ""
#define PDFSUFFIX ".pdf"
#define DVIPDF "dvipdf"
#define DVIPDFCOM "cd ${TARGET.dir} && $DVIPDF $DVIPDFFLAGS ${SOURCE.file} ${TARGET.file}"
#define PDFCOM "$DVIPDFCOM "
#define GS "gs"
#define GSCOM "$GS $GSFLAGS -sOutputFile=$TARGET $SOURCES"
#define TAR "tar"
#define TARCOM "$TAR $TARFLAGS -f $TARGET $SOURCES"
#define TARSUFFIX ".tar"
#define ZIP "zip"
#define ZIPCOMPRESSION 8
#define ZIPSUFFIX ".zip"
#define LINESEPARATOR ""
#define TEXTFILEPREFIX ""
#define TEXTFILESUFFIX ".txt"
#define SUBSTFILEPREFIX ""
#define SUBSTFILESUFFIX ""
#define ROOTFS "#${BUILDROOT}/rootfs"
#define ROOTFS_FILES ""
#define BIN "${ROOTFS}/bin"
#define ETC "${ROOTFS}/etc"
#define SERVER "${ROOTFS}/server"
#define BOOT "${ROOTFS}/boot"
#define QEMU "qemu-system-i386"
#define QEMUCMD "${QEMU} ${QEMUFLAGS}"
#define QEMUFLAGS "-smp 4 -m 256"
#define SESSION_MANAGER "local/bryson-VirtualBox:@/tmp/.ICE-unix/1119,unix/bryson-VirtualBox:/tmp/.ICE-unix/1119"
#define QT_ACCESSIBILITY 1
#define COLORTERM "truecolor"
#define XDG_CONFIG_DIRS "/etc/xdg/xdg-ubuntu:/etc/xdg"
#define XDG_MENU_PREFIX "gnome-"
#define GNOME_DESKTOP_SESSION_ID "this-is-deprecated"
#define GNOME_SHELL_SESSION_MODE "ubuntu"
#define SSH_AUTH_SOCK "/run/user/1000/keyring/ssh"
#define XMODIFIERS "@im=ibus"
#define DESKTOP_SESSION "ubuntu"
#define SSH_AGENT_PID 1024
#define GTK_MODULES "gail:atk-bridge"
#define LOGNAME "bryson"
#define XDG_SESSION_DESKTOP "ubuntu"
#define XDG_SESSION_TYPE "x11"
#define GPG_AGENT_INFO "/run/user/1000/gnupg/S.gpg-agent:0:1"
#define XAUTHORITY "/run/user/1000/gdm/Xauthority"
#define GJS_DEBUG_TOPICS "JS ERROR;JS LOG"
#define WINDOWPATH 2
#define HOME "/home/bryson"
#define USERNAME "bryson"
#define IM_CONFIG_PHASE 1
#define LANG "en_US.UTF-8"
#define LS_COLORS "rs=0:di=01;34:ln=01;36:mh=00:pi=40;33:so=01;35:do=01;35:bd=40;33;01:cd=40;33;01:or=40;31;01:mi=00:su=37;41:sg=30;43:ca=30;41:tw=30;42:ow=34;42:st=37;44:ex=01;32:*.tar=01;31:*.tgz=01;31:*.arc=01;31:*.arj=01;31:*.taz=01;31:*.lha=01;31:*.lz4=01;31:*.lzh=01;31:*.lzma=01;31:*.tlz=01;31:*.txz=01;31:*.tzo=01;31:*.t7z=01;31:*.zip=01;31:*.z=01;31:*.dz=01;31:*.gz=01;31:*.lrz=01;31:*.lz=01;31:*.lzo=01;31:*.xz=01;31:*.zst=01;31:*.tzst=01;31:*.bz2=01;31:*.bz=01;31:*.tbz=01;31:*.tbz2=01;31:*.tz=01;31:*.deb=01;31:*.rpm=01;31:*.jar=01;31:*.war=01;31:*.ear=01;31:*.sar=01;31:*.rar=01;31:*.alz=01;31:*.ace=01;31:*.zoo=01;31:*.cpio=01;31:*.7z=01;31:*.rz=01;31:*.cab=01;31:*.wim=01;31:*.swm=01;31:*.dwm=01;31:*.esd=01;31:*.jpg=01;35:*.jpeg=01;35:*.mjpg=01;35:*.mjpeg=01;35:*.gif=01;35:*.bmp=01;35:*.pbm=01;35:*.pgm=01;35:*.ppm=01;35:*.tga=01;35:*.xbm=01;35:*.xpm=01;35:*.tif=01;35:*.tiff=01;35:*.png=01;35:*.svg=01;35:*.svgz=01;35:*.mng=01;35:*.pcx=01;35:*.mov=01;35:*.mpg=01;35:*.mpeg=01;35:*.m2v=01;35:*.mkv=01;35:*.webm=01;35:*.ogm=01;35:*.mp4=01;35:*.m4v=01;35:*.mp4v=01;35:*.vob=01;35:*.qt=01;35:*.nuv=01;35:*.wmv=01;35:*.asf=01;35:*.rm=01;35:*.rmvb=01;35:*.flc=01;35:*.avi=01;35:*.fli=01;35:*.flv=01;35:*.gl=01;35:*.dl=01;35:*.xcf=01;35:*.xwd=01;35:*.yuv=01;35:*.cgm=01;35:*.emf=01;35:*.ogv=01;35:*.ogx=01;35:*.aac=00;36:*.au=00;36:*.flac=00;36:*.m4a=00;36:*.mid=00;36:*.midi=00;36:*.mka=00;36:*.mp3=00;36:*.mpc=00;36:*.ogg=00;36:*.ra=00;36:*.wav=00;36:*.oga=00;36:*.opus=00;36:*.spx=00;36:*.xspf=00;36:"
#define XDG_CURRENT_DESKTOP "ubuntu:GNOME"
#define VTE_VERSION 6003
#define GNOME_TERMINAL_SCREEN "/org/gnome/Terminal/screen/3d2f8fcb_409c_4883_8ed9_efe8f4217133"
#define INVOCATION_ID "1be4e39c96684d3098f5ad89624d7977"
#define MANAGERPID 812
#define GJS_DEBUG_OUTPUT "stderr"
#define LESSCLOSE "/usr/bin/lesspipe %s %s"
#define XDG_SESSION_CLASS "user"
#define TERM "xterm-256color"
#define LESSOPEN "| /usr/bin/lesspipe %s"
#define USER "bryson"
#define GNOME_TERMINAL_SERVICE ":1.281"
#define DISPLAY ":0"
#define SHLVL 1
#define QT_IM_MODULE "ibus"
#define XDG_RUNTIME_DIR "/run/user/1000"
#define JOURNAL_STREAM "8:30847"
#define XDG_DATA_DIRS "/usr/share/ubuntu:/usr/local/share/:/usr/share/:/var/lib/snapd/desktop"
#define PATH "/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin"
#define GDMSESSION "ubuntu"
#define DBUS_SESSION_BUS_ADDRESS "unix:path=/run/user/1000/bus"
#define _ "/usr/bin/scons"
#define ARCH "intel"
#define SYSTEM "pc"
#define COMPILER "gcc"
#define BUILDROOT "build/intel/pc"
#define VERSION_EXTRA ""
#define CROSS_COMPILE ""
#define VERSION_SUFFIX ""
#define LD "gcc"
#define ARCHFLAGS "-m32 -mtune=i686 "
#define _CCFLAGS "-Wall -Wextra -nostdinc -fno-stack-protector -fno-builtin -fno-pie -Wno-write-strings -Wno-unused-parameter -Wno-ignored-qualifiers -Wno-pragmas -Wno-cast-function-type -Wno-format-truncation -g3 -O0 -D__ASSERT__ "
#define _CXXFLAGS "-fno-rtti -fno-exceptions -fno-sized-deallocation -Wno-unknown-pragmas -std=c++03 -ffunction-sections "
#define CPPPATH "#build/${ARCH}/${SYSTEM}/include #kernel "
#define LINKUSER "-T config/intel/pc/user.ld "
#define LINKKERN "-T config/intel/pc/kernel.ld "
#define LINKEXTRA ""
#define STRIP "strip"
#define OBJCOPY "objcopy"
#define VERSION "1.0.3"
#define VERSIONCODE 65539
#define RELEASE "1.0.3-git(02af91e)*"
#define FREENOS 1
#define COMPILER_VERSION "gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
#define BUILDUSER "bryson"
#define BUILDHOST "bryson-VirtualBox"
#define BUILDOS "Linux 5.15.0-58-generic"
#define BUILDARCH "x86_64"
#define BUILDPY "Python 3.8.10"
#define BUILDER "SCons 3.1.2"
#define BUILDURL "/home/bryson/FreeNOS-CS4310"
#define BUILDPATH "/home/bryson/FreeNOS-CS4310"
#define TESTROOT ""
#endif

