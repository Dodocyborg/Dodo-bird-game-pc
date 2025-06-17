typedef enum FMOD_DSP_MULTIBAND_DYNAMICS
{
  FMOD_DSP_MULTIBAND_DYNAMICS_LOWER_FREQUENCY,
  FMOD_DSP_MULTIBAND_DYNAMICS_UPPER_FREQUENCY,
  FMOD_DSP_MULTIBAND_DYNAMICS_LINKED,
  FMOD_DSP_MULTIBAND_DYNAMICS_USE_SIDECHAIN,
  FMOD_DSP_MULTIBAND_DYNAMICS_A_MODE,
  FMOD_DSP_MULTIBAND_DYNAMICS_A_GAIN,
  FMOD_DSP_MULTIBAND_DYNAMICS_A_THRESHOLD,
  FMOD_DSP_MULTIBAND_DYNAMICS_A_RATIO,
  FMOD_DSP_MULTIBAND_DYNAMICS_A_ATTACK,
  FMOD_DSP_MULTIBAND_DYNAMICS_A_RELEASE,
  FMOD_DSP_MULTIBAND_DYNAMICS_A_GAIN_MAKEUP,
  FMOD_DSP_MULTIBAND_DYNAMICS_A_RESPONSE_DATA,
  FMOD_DSP_MULTIBAND_DYNAMICS_B_MODE,
  FMOD_DSP_MULTIBAND_DYNAMICS_B_GAIN,
  FMOD_DSP_MULTIBAND_DYNAMICS_B_THRESHOLD,
  FMOD_DSP_MULTIBAND_DYNAMICS_B_RATIO,
  FMOD_DSP_MULTIBAND_DYNAMICS_B_ATTACK,
  FMOD_DSP_MULTIBAND_DYNAMICS_B_RELEASE,
  FMOD_DSP_MULTIBAND_DYNAMICS_B_GAIN_MAKEUP,
  FMOD_DSP_MULTIBAND_DYNAMICS_B_RESPONSE_DATA,
  FMOD_DSP_MULTIBAND_DYNAMICS_C_MODE,
  FMOD_DSP_MULTIBAND_DYNAMICS_C_GAIN,
  FMOD_DSP_MULTIBAND_DYNAMICS_C_THRESHOLD,
  FMOD_DSP_MULTIBAND_DYNAMICS_C_RATIO,
  FMOD_DSP_MULTIBAND_DYNAMICS_C_ATTACK,
  FMOD_DSP_MULTIBAND_DYNAMICS_C_RELEASE,
  FMOD_DSP_MULTIBAND_DYNAMICS_C_GAIN_MAKEUP,
  FMOD_DSP_MULTIBAND_DYNAMICS_C_RESPONSE_DATA
};typedef enum FMOD_DSP_NORMALIZE {
  FMOD_DSP_NORMALIZE_FADETIME,
  FMOD_DSP_NORMALIZE_THRESHOLD,
  FMOD_DSP_NORMALIZE_MAXAMP
} FMOD_DSP_NORMALIZE;typedef enum FMOD_DSP_OBJECTPAN {
  FMOD_DSP_OBJECTPAN_3D_POSITION,
  FMOD_DSP_OBJECTPAN_3D_ROLLOFF,
  FMOD_DSP_OBJECTPAN_3D_MIN_DISTANCE,
  FMOD_DSP_OBJECTPAN_3D_MAX_DISTANCE,
  FMOD_DSP_OBJECTPAN_3D_EXTENT_MODE,
  FMOD_DSP_OBJECTPAN_3D_SOUND_SIZE,
  FMOD_DSP_OBJECTPAN_3D_MIN_EXTENT,
  FMOD_DSP_OBJECTPAN_OVERALL_GAIN,
  FMOD_DSP_OBJECTPAN_OUTPUTGAIN,
  FMOD_DSP_OBJECTPAN_ATTENUATION_RANGE,
  FMOD_DSP_OBJECTPAN_OVERRIDE_RANGE
} FMOD_DSP_OBJECTPAN;typedef enum FMOD_DSP_OBJECTPAN {
  FMOD_DSP_OBJECTPAN_3D_POSITION,
  FMOD_DSP_OBJECTPAN_3D_ROLLOFF,
  FMOD_DSP_OBJECTPAN_3D_MIN_DISTANCE,
  FMOD_DSP_OBJECTPAN_3D_MAX_DISTANCE,
  FMOD_DSP_OBJECTPAN_3D_EXTENT_MODE,
  FMOD_DSP_OBJECTPAN_3D_SOUND_SIZE,
  FMOD_DSP_OBJECTPAN_3D_MIN_EXTENT,
  FMOD_DSP_OBJECTPAN_OVERALL_GAIN,
  FMOD_DSP_OBJECTPAN_OUTPUTGAIN,
  FMOD_DSP_OBJECTPAN_ATTENUATION_RANGE,
  FMOD_DSP_OBJECTPAN_OVERRIDE_RANGE
} FMOD_DSP_OBJECTPAN;typedef enum FMOD_DSP_OBJECTPAN {
  FMOD_DSP_OBJECTPAN_3D_POSITION,
  FMOD_DSP_OBJECTPAN_3D_ROLLOFF,
  FMOD_DSP_OBJECTPAN_3D_MIN_DISTANCE,
  FMOD_DSP_OBJECTPAN_3D_MAX_DISTANCE,
  FMOD_DSP_OBJECTPAN_3D_EXTENT_MODE,
  FMOD_DSP_OBJECTPAN_3D_SOUND_SIZE,
  FMOD_DSP_OBJECTPAN_3D_MIN_EXTENT,
  FMOD_DSP_OBJECTPAN_OVERALL_GAIN,
  FMOD_DSP_OBJECTPAN_OUTPUTGAIN,
  FMOD_DSP_OBJECTPAN_ATTENUATION_RANGE,
  FMOD_DSP_OBJECTPAN_OVERRIDE_RANGE
} FMOD_DSP_OBJECTPAN;typedef enum FMOD_DSP_PAN {
  FMOD_DSP_PAN_MODE,
  FMOD_DSP_PAN_2D_STEREO_POSITION,
  FMOD_DSP_PAN_2D_DIRECTION,
  FMOD_DSP_PAN_2D_EXTENT,
  FMOD_DSP_PAN_2D_ROTATION,
  FMOD_DSP_PAN_2D_LFE_LEVEL,
  FMOD_DSP_PAN_2D_STEREO_MODE,
  FMOD_DSP_PAN_2D_STEREO_SEPARATION,
  FMOD_DSP_PAN_2D_STEREO_AXIS,
  FMOD_DSP_PAN_ENABLED_SPEAKERS,
  FMOD_DSP_PAN_3D_POSITION,
  FMOD_DSP_PAN_3D_ROLLOFF,
  FMOD_DSP_PAN_3D_MIN_DISTANCE,
  FMOD_DSP_PAN_3D_MAX_DISTANCE,
  FMOD_DSP_PAN_3D_EXTENT_MODE,
  FMOD_DSP_PAN_3D_SOUND_SIZE,
  FMOD_DSP_PAN_3D_MIN_EXTENT,
  FMOD_DSP_PAN_3D_PAN_BLEND,
  FMOD_DSP_PAN_LFE_UPMIX_ENABLED,
  FMOD_DSP_PAN_OVERALL_GAIN,
  FMOD_DSP_PAN_SURROUND_SPEAKER_MODE,
  FMOD_DSP_PAN_2D_HEIGHT_BLEND,
  FMOD_DSP_PAN_ATTENUATION_RANGE,
  FMOD_DSP_PAN_OVERRIDE_RANGE
} FMOD_DSP_PAN;typedef enum FMOD_DSP_PAN_3D_ROLLOFF_TYPE {
  FMOD_DSP_PAN_3D_ROLLOFF_LINEARSQUARED,
  FMOD_DSP_PAN_3D_ROLLOFF_LINEAR,
  FMOD_DSP_PAN_3D_ROLLOFF_INVERSE,
  FMOD_DSP_PAN_3D_ROLLOFF_INVERSETAPERED,
  FMOD_DSP_PAN_3D_ROLLOFF_CUSTOM
} FMOD_DSP_PAN_3D_ROLLOFF_TYPE;typedef enum FMOD_DSP_OSCILLATOR {
  FMOD_DSP_OSCILLATOR_TYPE,
  FMOD_DSP_OSCILLATOR_RATE
} FMOD_DSP_OSCILLATOR;typedef enum FMOD_DSP_PAN {
  FMOD_DSP_PAN_MODE,
  FMOD_DSP_PAN_2D_STEREO_POSITION,
  FMOD_DSP_PAN_2D_DIRECTION,
  FMOD_DSP_PAN_2D_EXTENT,
  FMOD_DSP_PAN_2D_ROTATION,
  FMOD_DSP_PAN_2D_LFE_LEVEL,
  FMOD_DSP_PAN_2D_STEREO_MODE,
  FMOD_DSP_PAN_2D_STEREO_SEPARATION,
  FMOD_DSP_PAN_2D_STEREO_AXIS,
  FMOD_DSP_PAN_ENABLED_SPEAKERS,
  FMOD_DSP_PAN_3D_POSITION,
  FMOD_DSP_PAN_3D_ROLLOFF,
  FMOD_DSP_PAN_3D_MIN_DISTANCE,
  FMOD_DSP_PAN_3D_MAX_DISTANCE,
  FMOD_DSP_PAN_3D_EXTENT_MODE,
  FMOD_DSP_PAN_3D_SOUND_SIZE,
  FMOD_DSP_PAN_3D_MIN_EXTENT,
  FMOD_DSP_PAN_3D_PAN_BLEND,
  FMOD_DSP_PAN_LFE_UPMIX_ENABLED,
  FMOD_DSP_PAN_OVERALL_GAIN,
  FMOD_DSP_PAN_SURROUND_SPEAKER_MODE,
  FMOD_DSP_PAN_2D_HEIGHT_BLEND,
  FMOD_DSP_PAN_ATTENUATION_RANGE,
  FMOD_DSP_PAN_OVERRIDE_RANGE
} FMOD_DSP_PAN;typedef enum FMOD_DSP_TYPE {
  FMOD_DSP_TYPE_UNKNOWN,
  FMOD_DSP_TYPE_MIXER,
  FMOD_DSP_TYPE_OSCILLATOR,
  FMOD_DSP_TYPE_LOWPASS,
  FMOD_DSP_TYPE_ITLOWPASS,
  FMOD_DSP_TYPE_HIGHPASS,
  FMOD_DSP_TYPE_ECHO,
  FMOD_DSP_TYPE_FADER,
  FMOD_DSP_TYPE_FLANGE,
  FMOD_DSP_TYPE_DISTORTION,
  FMOD_DSP_TYPE_NORMALIZE,
  FMOD_DSP_TYPE_LIMITER,
  FMOD_DSP_TYPE_PARAMEQ,
  FMOD_DSP_TYPE_PITCHSHIFT,
  FMOD_DSP_TYPE_CHORUS,
  FMOD_DSP_TYPE_ITECHO,
  FMOD_DSP_TYPE_COMPRESSOR,
  FMOD_DSP_TYPE_SFXREVERB,
  FMOD_DSP_TYPE_LOWPASS_SIMPLE,
  FMOD_DSP_TYPE_DELAY,
  FMOD_DSP_TYPE_TREMOLO,
  FMOD_DSP_TYPE_SEND,
  FMOD_DSP_TYPE_RETURN,
  FMOD_DSP_TYPE_HIGHPASS_SIMPLE,
  FMOD_DSP_TYPE_PAN,
  FMOD_DSP_TYPE_THREE_EQ,
  FMOD_DSP_TYPE_FFT,
  FMOD_DSP_TYPE_LOUDNESS_METER,
  FMOD_DSP_TYPE_CONVOLUTIONREVERB,
  FMOD_DSP_TYPE_CHANNELMIX,
  FMOD_DSP_TYPE_TRANSCEIVER,
  FMOD_DSP_TYPE_OBJECTPAN,
  FMOD_DSP_TYPE_MULTIBAND_EQ,
  FMOD_DSP_TYPE_MULTIBAND_DYNAMICS,
  FMOD_DSP_TYPE_MAX
} FMOD_DSP_TYPE;typedef struct FMOD_ADVANCEDSETTINGS {
  int                  cbSize;
  int                  maxMPEGCodecs;
  int                  maxADPCMCodecs;
  int                  maxXMACodecs;
  int                  maxVorbisCodecs;
  int                  maxAT9Codecs;
  int                  maxFADPCMCodecs;
  int                  maxOpusCodecs;
  int                  ASIONumChannels;
  char               **ASIOChannelList;
  FMOD_SPEAKER        *ASIOSpeakerList;
  float                vol0virtualvol;
  unsigned int         defaultDecodeBufferSize;
  unsigned short       profilePort;
  unsigned int         geometryMaxFadeTime;
  float                distanceFilterCenterFreq;
  int                  reverb3Dinstance;
  int                  DSPBufferPoolSize;
  FMOD_DSP_RESAMPLER   resamplerMethod;
  unsigned int         randomSeed;
  int                  maxConvolutionThreads;
  int                  maxSpatialObjects;
} FMOD_ADVANCEDSETTINGS;typedef struct FMOD_ADVANCEDSETTINGS {
  int                  cbSize;
  int                  maxMPEGCodecs;
  int                  maxADPCMCodecs;
  int                  maxXMACodecs;
  int                  maxVorbisCodecs;
  int                  maxAT9Codecs;
  int                  maxFADPCMCodecs;
  int                  maxOpusCodecs;
  int                  ASIONumChannels;
  char               **ASIOChannelList;
  FMOD_SPEAKER        *ASIOSpeakerList;
  float                vol0virtualvol;
  unsigned int         defaultDecodeBufferSize;
  unsigned short       profilePort;
  unsigned int         geometryMaxFadeTime;
  float                distanceFilterCenterFreq;
  int                  reverb3Dinstance;
  int                  DSPBufferPoolSize;
  FMOD_DSP_RESAMPLER   resamplerMethod;
  unsigned int         randomSeed;
  int                  maxConvolutionThreads;
  int                  maxSpatialObjects;
} FMOD_ADVANCEDSETTINGS;C
C++
C#
JS
typedef struct FMOD_CREATESOUNDEXINFO {
  int                              cbsize;
  unsigned int                     length;
  unsigned int                     fileoffset;
  int                              numchannels;
  int                              defaultfrequency;
  FMOD_SOUND_FORMAT                format;
  unsigned int                     decodebuffersize;
  int                              initialsubsound;
  int                              numsubsounds;
  int                             *inclusionlist;
  int                              inclusionlistnum;
  FMOD_SOUND_PCMREAD_CALLBACK      pcmreadcallback;
  FMOD_SOUND_PCMSETPOS_CALLBACK    pcmsetposcallback;
  FMOD_SOUND_NONBLOCK_CALLBACK     nonblockcallback;
  const char                      *dlsname;
  const char                      *encryptionkey;
  int                              maxpolyphony;
  void                            *userdata;
  FMOD_SOUND_TYPE                  suggestedsoundtype;
  FMOD_FILE_OPEN_CALLBACK          fileuseropen;
  FMOD_FILE_CLOSE_CALLBACK         fileuserclose;
  FMOD_FILE_READ_CALLBACK          fileuserread;
  FMOD_FILE_SEEK_CALLBACK          fileuserseek;
  FMOD_FILE_ASYNCREAD_CALLBACK     fileuserasyncread;
  FMOD_FILE_ASYNCCANCEL_CALLBACK   fileuserasynccancel;
  void                            *fileuserdata;
  int                              filebuffersize;
  FMOD_CHANNELORDER                channelorder;
  FMOD_SOUNDGROUP                 *initialsoundgroup;
  unsigned int                     initialseekposition;
  FMOD_TIMEUNIT                    initialseekpostype;
  int                              ignoresetfilesystem;
  unsigned int                     audioqueuepolicy;
  unsigned int                     minmidigranularity;
  int                              nonblockthreadid;
  FMOD_GUID                       *fsbguid;
} FMOD_CREATESOUNDEXINFO;typedef enum FMOD_DSP_RESAMPLER {
  FMOD_DSP_RESAMPLER_DEFAULT,
  FMOD_DSP_RESAMPLER_NOINTERP,
  FMOD_DSP_RESAMPLER_LINEAR,
  FMOD_DSP_RESAMPLER_CUBIC,
  FMOD_DSP_RESAMPLER_SPLINE,
  FMOD_DSP_RESAMPLER_MAX
} FMOD_DSP_RESAMPLER;typedef enum FMOD_ERRORCALLBACK_INSTANCETYPE {
  FMOD_ERRORCALLBACK_INSTANCETYPE_NONE,
  FMOD_ERRORCALLBACK_INSTANCETYPE_SYSTEM,
  FMOD_ERRORCALLBACK_INSTANCETYPE_CHANNEL,
  FMOD_ERRORCALLBACK_INSTANCETYPE_CHANNELGROUP,
  FMOD_ERRORCALLBACK_INSTANCETYPE_CHANNELCONTROL,
  FMOD_ERRORCALLBACK_INSTANCETYPE_SOUND,
  FMOD_ERRORCALLBACK_INSTANCETYPE_SOUNDGROUP,
  FMOD_ERRORCALLBACK_INSTANCETYPE_DSP,
  FMOD_ERRORCALLBACK_INSTANCETYPE_DSPCONNECTION,
  FMOD_ERRORCALLBACK_INSTANCETYPE_GEOMETRY,
  FMOD_ERRORCALLBACK_INSTANCETYPE_REVERB3D,
  FMOD_ERRORCALLBACK_INSTANCETYPE_STUDIO_SYSTEM,
  FMOD_ERRORCALLBACK_INSTANCETYPE_STUDIO_EVENTDESCRIPTION,
  FMOD_ERRORCALLBACK_INSTANCETYPE_STUDIO_EVENTINSTANCE,
  FMOD_ERRORCALLBACK_INSTANCETYPE_STUDIO_PARAMETERINSTANCE,
  FMOD_ERRORCALLBACK_INSTANCETYPE_STUDIO_BUS,
  FMOD_ERRORCALLBACK_INSTANCETYPE_STUDIO_VCA,
  FMOD_ERRORCALLBACK_INSTANCETYPE_STUDIO_BANK,
  FMOD_ERRORCALLBACK_INSTANCETYPE_STUDIO_COMMANDREPLAY
} FMOD_ERRORCALLBACK_INSTANCETYPE;typedef enum FMOD_OPENSTATE {
  FMOD_OPENSTATE_READY,
  FMOD_OPENSTATE_LOADING,
  FMOD_OPENSTATE_ERROR,
  FMOD_OPENSTATE_CONNECTING,
  FMOD_OPENSTATE_BUFFERING,
  FMOD_OPENSTATE_SEEKING,
  FMOD_OPENSTATE_PLAYING,
  FMOD_OPENSTATE_SETPOSITION,
  FMOD_OPENSTATE_MAX
} FMOD_OPENSTATE;FMOD_RESULT Sound::deleteSyncPoint(
  FMOD_SYNCPOINT *point
);typedef enum FMOD_SOUND_FORMAT {
  FMOD_SOUND_FORMAT_NONE,
  FMOD_SOUND_FORMAT_PCM8,
  FMOD_SOUND_FORMAT_PCM16,
  FMOD_SOUND_FORMAT_PCM24,
  FMOD_SOUND_FORMAT_PCM32,
  FMOD_SOUND_FORMAT_PCMFLOAT,
  FMOD_SOUND_FORMAT_BITSTREAM,
  FMOD_SOUND_FORMAT_MAX
} FMOD_SOUND_FORMAT;FMOD_RESULT Sound::get3DCustomRolloff(
  FMOD_VECTOR **points,
  int *numpoints
);FMOD_RESULT Sound::get3DMinMaxDistance(
  float *min,
  float *max
);  FMOD_CHANNELCONTROL_CALLBACK_END,
  FMOD_CHANNELCONTROL_CALLBACK_VIRTUALVOICE,
  FMOD_CHANNELCONTROL_CALLBACK_SYNCPOINT,
  FMOD_CHANNELCONTROL_CALLBACK_OCCLUSION,
  FMOD_CHANNELCONTROL_CALLBACK_MAX
} FMOD_CHANNELCONTROL_CALLBACK_TYPE;// Defining a custom array of points
FMOD_VECTOR curve[3] =
{
    { 0.0f,  1.0f, 0.0f },
    { 2.0f,  0.2f, 0.0f },
    { 20.0f, 0.0f, 0.0f }
};FMOD_RESULT ChannelControl::setMixLevelsOutput(
  float frontleft,
  float frontright,
  float center,
  float lfe,
  float surroundleft,
  float surroundright,
  float backleft,
  float backright
);FMOD_RESULT ChannelControl::setMixLevelsOutput(
  float frontleft,
  float frontright,
  float center,
  float lfe,
  float surroundleft,
  float surroundright,
  float backleft,
  float backright
);FMOD_RESULT ChannelControl::setMixLevelsOutput(
  float frontleft,
  float frontright,
  float center,
  float lfe,
  float surroundleft,
  float surroundright,
  float backleft,
  float backright
);FMOD_RESULT ChannelControl::setMixLevelsOutput(
  float frontleft,
  float frontright,
  float center,
  float lfe,
  float surroundleft,
  float surroundright,
  float backleft,
  float backright
);FMOD_RESULT ChannelControl::setMixLevelsOutput(
  float frontleft,
  float frontright,
  float center,
  float lfe,
  float surroundleft,
  float surroundright,
  float backleft,
  float backright
);FMOD_RESULT ChannelControl::setMixLevelsOutput(
  float frontleft,
  float frontright,
  float center,
  float lfe,
  float surroundleft,
  float surroundright,
  float backleft,
  float backright
);FMOD_RESULT Channel::getLoopPoints(
  unsigned int *loopstart,
  FMOD_TIMEUNIT loopstarttype,
  unsigned int *loopend,
  FMOD_TIMEUNIT loopendtype
);FMOD_RESULT Channel::setLoopCount(
  int loopcount
);FMOD_RESULT Channel::isVirtual(
  bool *isvirtual
);FMOD_RESULT Channel::getPosition(
  unsigned int *position,
  FMOD_TIMEUNIT postype
);FMOD_RESULT F_CALL FMOD_DSP_CALLBACK(
  FMOD_DSP *dsp,
  FMOD_DSP_CALLBACK_TYPE type,
  void *data
);FMOD_RESULT F_CALL FMOD_DSP_CALLBACK(
  FMOD_DSP *dsp,
  FMOD_DSP_CALLBACK_TYPE type,
  void *data
);typedef struct FMOD_DSP_DATA_PARAMETER_INFO {
  void          *data;
  unsigned int  length;
  int           index;
} FMOD_DSP_DATA_PARAMETER_INFO;FMOD_RESULT DSP::getBypass(
  bool *bypass
);FMOD_RESULT DSP::getCPUUsage(
  unsigned int *exclusive,
  unsigned int *inclusive
);FMOD_RESULT DSP::getSystemObject(
  System **system
);FMOD_RESULT DSP::getOutputChannelFormat(
  FMOD_CHANNELMASK inmask,
  int inchannels,
  FMOD_SPEAKERMODE inspeakermode,
  FMOD_CHANNELMASK *outmask,
  int *outchannels,
  FMOD_SPEAKERMODE *outspeakermode
);FMOD_RESULT DSP::getOutputChannelFormat(
  FMOD_CHANNELMASK inmask,
  int inchannels,
  FMOD_SPEAKERMODE inspeakermode,
  FMOD_CHANNELMASK *outmask,
  int *outchannels,
  FMOD_SPEAKERMODE *outspeakermode
);FMOD_RESULT DSP::getOutputChannelFormat(
  FMOD_CHANNELMASK inmask,
  int inchannels,
  FMOD_SPEAKERMODE inspeakermode,
  FMOD_CHANNELMASK *outmask,
  int *outchannels,
  FMOD_SPEAKERMODE *outspeakermode
);FMOD_RESULT DSP::getOutputChannelFormat(
  FMOD_CHANNELMASK inmask,
  int inchannels,
  FMOD_SPEAKERMODE inspeakermode,
  FMOD_CHANNELMASK *outmask,
  int *outchannels,
  FMOD_SPEAKERMODE *outspeakermode
);FMOD_RESULT DSP::getNumInputs(
  int *numinputs
);FMOD_RESULT DSP::getNumInputs(
  int *numinputs
);FMOD_RESULT DSP::getMeteringEnabled(
  bool *inputEnabled,
  bool *outputEnabled
);
FMOD_RESULT DSP::disconnectAll(
  bool inputs,
  bool outputs
);FMOD_RESULT DSP::disconnectFrom(
  DSP *target,
  DSPConnection *connection = nullptr
);FMOD_RESULT DSP::reset();FMOD_RESULT DSP::reset();FMOD_RESULT DSPConnection::getMix(
  float *volume
);FMOD_RESULT DSPConnection::getInput(
  DSP **input
);FMOD_RESULT DSPConnection::getOutput(
  DSP **output
);typedef enum FMOD_DSPCONNECTION_TYPE {
  FMOD_DSPCONNECTION_TYPE_STANDARD,
  FMOD_DSPCONNECTION_TYPE_SIDECHAIN,
  FMOD_DSPCONNECTION_TYPE_SEND,
  FMOD_DSPCONNECTION_TYPE_SEND_SIDECHAIN,
  FMOD_DSPCONNECTION_TYPE_MAXFMOD_RESULT Geometry::getMaxPolygons(
  int *maxpolygons,
  int *maxvertices
);FMOD_RESULT Geometry::setScale(
  const FMOD_VECTOR *scale
);FMOD_RESULT Geometry::setScale(
  const FMOD_VECTOR *scale
);
} FMOD_DSPCONNECTION_TYPE;FMOD_RESULT Geometry::addPolygon(
  float directocclusion,
  float reverbocclusion,
  bool doublesided,
  int numvertices,
  const FMOD_VECTOR *vertices,
  int *polygonindex
);FMOD_RESULT Geometry::getPosition(
  FMOD_VECTOR *position
);FMOD_RESULT Geometry::getMaxPolygons(
  int *maxpolygons,
  int *maxvertices
);