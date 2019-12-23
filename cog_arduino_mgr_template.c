﻿//[[[cog import cog]]]
//[[[end]]]
// This is file has been prepared by a cog script.

/*[[[cog
cog.out("/// \\file $$Mgr.c".replace ('$$', prefix, 1))
]]]*/
//[[[end]]]
/// \brief    DON'T FORGET TO DESCRIBE THE FILE HERE!
/// \author   Infinition - Nicolas Bourré
///

////////////////////////////////////////////////////////////////////////////////
// Includes
////////////////////////////////////////////////////////////////////////////////
#include "Arduino.h"

////////////////////////////////////////////////////////////////////////////////
// Definitions
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
// Data types
////////////////////////////////////////////////////////////////////////////////

/*[[[cog
cog.outl("typedef struct")
cog.outl("{")
cog.outl("\tBOOL\t\t\tbIsConfigured;\t\t\t\t\t///< Flag indicating that the module is configured or not.")
cog.outl("\t//TODO ADD PROPERTIES HERE!!")
cog.outl("} o" + "$$MgrTy, *po$$MgrTy;".replace ('$$', prefix))
cog.outl("")
]]]*/
//[[[end]]]

////////////////////////////////////////////////////////////////////////////////
// Private functions
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
/// Local variables
////////////////////////////////////////////////////////////////////////////////
/*[[[cog
cog.outl("o$$MgrTy o$$Mgr\t\t\t= {FALSE};".replace ('$$', prefix))
cog.outl("")

function_comment_block = '''
////////////////////////////////////////////////////////////////////////////////
/// \\brief 		TODO DESCRIPTION HERE
/// \\public
///
/// \\return		TRUE if success, FALSE otherwise.
////////////////////////////////////////////////////////////////////////////////
'''

fnames = ['BOOL $$Mgr()', 'BOOL $$MgrTask()', 'BOOL $$MgrConfigure()']
for fn in fnames:
    
    cog.outl(function_comment_block)
    cog.outl(fn.replace('$$', prefix, 1))
    cog.outl("{")
    cog.outl("\tBOOL bRet = FALSE;")
    cog.outl("")
    cog.outl("\t// TODO YOUR CODE HERE!!")
    cog.outl("")
    cog.outl("END:")
    cog.outl("\treturn bRet;")
    cog.outl("}")

cog.outl("")
]]]*/



//[[[end]]]