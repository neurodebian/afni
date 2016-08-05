# AFNI configuration script
#
# This script configures a set of environment variables that control
# AFNI's runtime behavior. This script can be sourced and in turn also
# takes care of loading additional user-specific configuration from
# $HOME/.config/AFNI/afni.sh
#
# NOTE: Do not attempt to source this file in the AFNI user config script
#       (mentioned above), as this will result in an infinite loop.
#
# Written for the Debian package of AFNI by Michael Hanke
# <michael.hanke@gmail.com>.

#
# AFNI path setup
#
# Where AFNI is installed
AFNI_INSTALLDIR=/usr/lib/afni

# add the AFNI binary path to the search path
PATH=${PATH}:${AFNI_INSTALLDIR}/bin

# Location of the plugins
AFNI_PLUGINPATH=${AFNI_INSTALLDIR}/plugins

# Location of the timseries models (also plugins)
AFNI_MODELPATH=${AFNI_INSTALLDIR}/models

# Location of the talairach daemon database
AFNI_TTATLAS_DATASET=/usr/share/afni/atlases

#
# Runtime checks
#
# Suppress warning for missing mpeg output
AFNI_IMSAVE_WARNINGS=NO

# DO NOT CHANGE
export PATH AFNI_PLUGINPATH AFNI_MODELPATH AFNI_IMSAVE_WARNINGS \
  AFNI_TTATLAS_DATASET


###################################################
####    DO NOT ADD ANYTHING BELOW THIS LINE    ####
###################################################


# attempt to load user configuration
if [ -f "${HOME}/.config/AFNI/afni.sh" ] ; then
  . "${HOME}/.config/AFNI/afni.sh" ;
fi
