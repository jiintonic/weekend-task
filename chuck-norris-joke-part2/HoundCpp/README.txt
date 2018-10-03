
This is the README file for the Houndify C++ SDK and command-line
sample client.  The sample client is provided as a simple example of
how to write a client that uses the Houndify API.


        COMPONENTS
        ----------

The C++ SDK comes in a compressed tar file.  The following components
are in the root directory when it is unpacked:

  * This README.txt file.

  * HoundRequester
  * HoundJSON
  * JSON
  * GoldenRetriever
  * HTTP
  * Numbers
  * Common
  * ReferenceCounting
  * SalmonEye
  * c_foundations
        These directory contain the source code for the core libraries
        of the SDK.

  * SampleCppClient  This is a directory containing the source code
        for the sample command-line client program that uses the
        libraries from the other directories.  It is intended mainly
        as a demonstration of how to use the SDK.

  * Makefile  A makefile that can be used to build all the core
        libraries of the SDK and the sample program.

        REQUIREMENTS
        ------------

The C and C++ files that make up this SDK and sample client are
designed to be portable and should compile on a variety of systems
with a minimum effort.  Any system that provides POSIX-compatible
system headers and libraries should support the generic version of
this SDK and client code.  There is a variant of this code for Windows
(available as a separate download from Houndify.com).  The Windows
variant is known to work on Microsoft's Visual Studio C++ compiler on
Windows 10 and also on the MinGW compiler and tool suite, which
provides gcc for Windows.  In addition, there is another variant of
this code for the Broadcom Wiced platform, and that variant is also
available as a separate download on Houndify.com.

The one required external library beyond POSIX or Windows is OpenSSL.
This is an open-source implementation of the SSL protocol and is used
to implement the HTTPS protocol that is used to communicate with the
Houndify API as well as to perform some cryptographic calculations
beyond SSL that are used for authentication by the Houndify API.

Please note that both the library and the headers for OpenSSL are
required.  On many package management systems, installing the "libssl"
package will only install libssl.a, not the .h files that are needed
to compile against OpenSSL.  Often the package name that gives the
headers also has "dev" in the name, such as "libssl-dev".

        BUILDING
        --------

    Windows with Visual Studio
    --------------------------

The Houndify C++ SDK can be built with Microsoft's Visual studio C++
compiler for Windows.  It's important to have the right version of the
SDK for this, though.  On the SDK download page of Houndify.com, there
is a list of different platforms.  "C++" is one option and "Windows
C++" is another.  Select "Windows C++" to get the page that gives
access to the three variants of the Windows version of the Houndify
C++ SDK.

Visual Studio uses a graphical interface, so it doesn't use a
makefile.  To build the sample app, start by creating an empty Win32
or Win64 console application project.  Unpack the distribution from
the .tar.gz directory, then drag and drop the whole HoundWindows
directory into the icon for your new project.  This will add all the
C++ and C source files to the project.

Next, add the include directories.  The HoundWindows directory itself
and each of its sub-directories should be added to the list of extra
include paths.

Now, make sure you have Open SSL installed.  There are binary versions
of the Open SSL libraries that include all the headers available from
this page:

    https://slproweb.com/products/Win32OpenSSL.html

Alternatively, you can download the source and build it yourself.

Next, add the include path for Open SSL to your Visual Studio
project's extra include paths list.

More information coming soon!

    Windows with MinGW
    ------------------

More information coming soon!

    Windows with Cygwin
    -------------------

More information coming soon!

    Apple OS X
    ----------

The Houndify C++ SDK uses OpenSSL to facilitate secure connections
with the Houndify servers; newer versions of OS X do not include
OpenSSL headers at all, and the version of OpenSSL that ships with OS
X versions prior to El Capitan is old, unsupported and doesn't work
properly with the Houndify servers.  In either case it is necessary to
install the headers and library of a more recent version of OpenSSL
and compile and link against that version, and it's recommended to use
Homebrew to obtain the proper version of OpenSSL.  The library will
reside in "/usr/local/opt/openssl" by default when installed with
Homebrew.

If you haven't ever used a command-line development environment on
your Mac, you must first run:

    xcode-select --install

to install the Command Line Tools, including make, gcc, clang, etc.
Follow the prompts, agree to the license, and wait for the package to
download and install (it's about 130MB).

To install Homebrew, if you haven't done so, visit http://brew.sh and
follow the instructions.  Then, run:

    brew install openssl

Once that finishes successfully, run the following in the unpacked
HoundCpp directory:

    make -f Makefile.OSX

If you've installed a version of OpenSSL using a different method than
Homebrew, you may have to provide different CPP_FLAGS to make, and/or
modify the Makefiles for HoundCpp.  For this reason, it's strongly
recommended to install those packages using Homebrew.

    Linux or other Posix
    --------------------

To build the client, unpack the contents of the compressed tar file
and cd into the HoundCpp directory.  Here, type

    make

This should build all the libraries needed by the client and then the
client itself.

The makefiles use gcc, but any standard C++ compiler should work.
There is one Makefile for each sub-directory and there is a
sub-directory for each library.  Each Makefile provides variables that
allow the compiler, compiler arguments, linker, linker arguments,
etc. to be modified on the "make" command line.

Note that for simplicity the Makefiles do not have header file
dependence information.  So, if you modify a header file, it will not
rebuild all affected .o and other files when you type "make".  That's
to keep the Makefiles as simple and portable as possible.

        RUNNING
        -------

The client executable is built in the SampleCppClient sub-directory
and is called sample_hound_cpp_client.  If the client is run with no
arguments, it prints a usage message:

    Usage: ./sample_hound_cpp_client <client-id> <client-key>
        <user-id> { <text-URL-base> { <voice-URL-base> }? }?

Note that the <text-URL-base> and <voice-URL-base> parameters are
optional.  If they are not provided on the command line, the defaults
will be used, which is normally what should be used.

The <client-id> and <client-key> parameters are the client ID and
corresponding client key obtained from the Houndify.com site.  They
are required to authenticate with the Houndify API.  If you don't have
them already, you will need to log in to Houndify.com and register a
client.  When you register the client, it will create the client ID
and client key for you.

The final argument to the sample client is the <user-id>.  You may use
anything you like for this parameter.  It represents the ID of a
particular user of your client.  You can decide for yourself what the
user ID is for each of your users.

When you have all the required parameters, you can start the client.
It will then sit in a loop and wait for you to type queries one line
at a time.  These may be text queries, such as

    What is the weather like in Chicago?

They may also be of the form

    -audio <file>

where <file> is an audio file.  Supported audio formats are .wav and
Speex.

Another alternative for audio files is to use

    -transcript-audio <file>

This will work as with -audio but with the additional feature that
partial transcriptions from the server will be printed.

A variant on that is

    -slow-transcript-audio <file>

This is the same as -transcript-audio but with some delays added in
when sending the audio file to the server.  This makes it clear that
the partial transcriptions are coming in real time while the audio
data is being sent to the server.

Note: Your Houndify account may have limits on your API access.  If
you submit a large number of queries in batch, you may exceed these
limits and find that further requests with your client ID are denied.
Please see http://houndify.com for details on the limits of your
account.

        WRITING YOUR OWN C++ CLIENT
        ---------------------------

The file SampleCppClient/sample_cpp_client.cpp provides an example of
how to use the SDK.  This file provides a simple command-line wrapper
that uses the HoundCloudRequester class and sample_hound_driver()
function.

The HoundCloudRequester class (in
HoundRequester/HoundCloudRequester.h) is the main interface to the
Houndify API.  It extends the abstract HoundRequester class (in
HoundRequester/HoundRequester.h).  The HoundRequester class provides
an interface that can be used to access a Houndify implementation
wherever it is -- for now, only through the Houndify API using the
HoundCloudRequester subclass, but in the future also a local embedded
implementation or a dual-mode implementation will be available through
other subclasses of HoundRequester.

To create a HoundCloudRequester class, the following constructor is
used:

    HoundCloudRequester(const char *client_id, const char *client_key,
            const char *user_id,
            const char *text_request_url_base = default_text_request_url_base(),
            const char *voice_request_url_base =
                    default_voice_request_url_base());

Note that the final two arguments are optional and specify the API URL
endpoints to hit, but normally you don't need to specify them and you
can just use the defaults.

The client_id, client_key, and user_id parameters are the client ID,
client key, and user ID parameters.  As mentioned above, the client ID
and client key you will get from Houndify.com when you register a
client.  The user ID should be different for each user of your client
and should be generated by your code to identifier that user.
User-specific data is stored keyed to the user ID, so it is important
that each user of your client get a different user ID, but that each
user gets the same user ID every time he or she uses the client.

Text requests use this method on the HoundRequester class:

    HoundServerJSON *do_text_request(const char *query,
            ConversationStateJSON *conversation_state,
            RequestInfoJSON *request_info);

The query parameter is the text of the request.  The conversation
state should be NULL on a first request and on subsequent requests it
should come from the JSON returned by the previous request.  The
request_info is a class that has various fields that can optionally be
filled in by the client that help the server do a better job of
handling the request, such as location information.  The client should
fill in as many fields of this class as possible.

The conversation_state and request_info use classes
(ConversationStateJSON and RequestInfoJSON) that correspond directly
to JSON sent to the server.  The result of this method uses the
HoundServerJSON class, which corresponds directly to the JSON recieved
from the server.  The formats of these JSON values are documented on
the Houndify.com website.  The fields in the C++ classes correspond
exactly to the fields as documented on Houndify.com.  In fact, both
the documentation and the C++ code are automatically generated from
the same specification.

Voice requests use this method on the HoundRequester class:

    VoiceRequest *start_voice_request(ConversationStateJSON *conversation_state,
            RequestInfoJSON *request_info,
            PartialHandler *partial_handler = NULL);

This is a little more complex than the text case.  Like the text case,
conversation_state and request_info parameters are passed in.  But an
additional parameter is passed in -- the partial_handler parameter.
This is a callback mechanism for your code to get notified when
partial transcript information comes back from the server while the
audio is still being sent.  Your code can choose to ignore it, or it
can use it, for example to display to the user what the system thinks
the user has said so far.

The PartialHandler abstract class is declared within the
HoundRequester class.  It has a pure virtual handle() method which
your code should implement:

    virtual void handle(HoundPartialTranscriptJSON *partial) = 0;

Note that the parameter it gets is of type HoundPartialTranscriptJSON.
This is another type that corresponds exactly to a JSON value and
which is documented on Houndify.com.  It contains a partial transcript
and also a signal from the server-side Voice Activity Detector (VAD)
indicating whether the server thinks the user has finished speaking.
The client may use this to decide when to finish the request.

The start_voice_request() method returns an object of type
VoiceRequest.  This is another abstract class declared within the
HoundRequester class.

The VoiceRequest class has two methods that should be used by your
client code to communicate information about the audio to the server:

    virtual void add_audio(size_t byte_count, const void *data) = 0;
    virtual HoundServerJSON *finish(void) = 0;

The add_audio() method sends some bytes of audio data.  The finish()
method should be called when the audio is done.

Note that the data sent through add_audio() should form a valid WAV or
SPEEX data file.  Raw PCM audio without a WAV header is not acceptable
and will not work.  When sending raw data, the WAV header must be sent
first.  It doesn't matter how the data is split up among calls to
add_audio(), but any waiting done by the client to put the data into
larger blocks before sending it to the server will delay the response
by the server, so it's generally a good idea to send smaller blocks of
data as they become available from a microphone.

Note that the add_audio() method returns nothing but that the finish()
method returns an object of type HoundServerJSON, which is the same
type returned by the do_text_request() -- it directly represents the
JSON sent by the server in response to the query.  Please see the
documentation on Houndify.com for details of the fields of
HoundServerJSON.

        SUPPORT
        -------

If you have any issues with this C++ SDK, please visit
http://houndify.com for support.
