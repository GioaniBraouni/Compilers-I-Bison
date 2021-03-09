/* A Bison parser, made by GNU Bison 2.7.  */

/* Skeleton implementation for Bison LALR(1) parsers in C++
   
      Copyright (C) 2002-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* First part of user declarations.  */
/* Line 279 of lalr1.cc  */
#line 3 "MINIC.y"

#include <iostream>
#include "MINIC.tab.h"
#include "CompositeConcrete.h"

using namespace std;
extern int yylex(yy::parser::semantic_type *yylval ,yy::parser::location_type *yylloc);
extern FILE *yyin;


/* Line 279 of lalr1.cc  */
#line 49 "MINIC.tab.cpp"


#include "MINIC.tab.h"

/* User implementation prologue.  */

/* Line 285 of lalr1.cc  */
#line 57 "MINIC.tab.cpp"


# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* FIXME: INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


/* Suppress unused-variable warnings by "using" E.  */
#define YYUSE(e) ((void) (e))

/* Enable debugging if requested.  */
#if YYDEBUG

/* A pseudo ostream that takes yydebug_ into account.  */
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)	\
do {							\
  if (yydebug_)						\
    {							\
      *yycdebug_ << Title << ' ';			\
      yy_symbol_print_ ((Type), (Value), (Location));	\
      *yycdebug_ << std::endl;				\
    }							\
} while (false)

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug_)				\
    yy_reduce_print_ (Rule);		\
} while (false)

# define YY_STACK_PRINT()		\
do {					\
  if (yydebug_)				\
    yystack_print_ ();			\
} while (false)

#else /* !YYDEBUG */

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Type, Value, Location) YYUSE(Type)
# define YY_REDUCE_PRINT(Rule)        static_cast<void>(0)
# define YY_STACK_PRINT()             static_cast<void>(0)

#endif /* !YYDEBUG */

#define yyerrok		(yyerrstatus_ = 0)
#define yyclearin	(yychar = yyempty_)

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


namespace yy {
/* Line 353 of lalr1.cc  */
#line 152 "MINIC.tab.cpp"

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              /* Fall through.  */
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  parser::parser ()
#if YYDEBUG
     :yydebug_ (false),
      yycdebug_ (&std::cerr)
#endif
  {
  }

  parser::~parser ()
  {
  }

#if YYDEBUG
  /*--------------------------------.
  | Print this symbol on YYOUTPUT.  |
  `--------------------------------*/

  inline void
  parser::yy_symbol_value_print_ (int yytype,
			   const semantic_type* yyvaluep, const location_type* yylocationp)
  {
    YYUSE (yylocationp);
    YYUSE (yyvaluep);
    std::ostream& yyo = debug_stream ();
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    switch (yytype)
      {
         default:
	  break;
      }
  }


  void
  parser::yy_symbol_print_ (int yytype,
			   const semantic_type* yyvaluep, const location_type* yylocationp)
  {
    *yycdebug_ << (yytype < yyntokens_ ? "token" : "nterm")
	       << ' ' << yytname_[yytype] << " ("
	       << *yylocationp << ": ";
    yy_symbol_value_print_ (yytype, yyvaluep, yylocationp);
    *yycdebug_ << ')';
  }
#endif

  void
  parser::yydestruct_ (const char* yymsg,
			   int yytype, semantic_type* yyvaluep, location_type* yylocationp)
  {
    YYUSE (yylocationp);
    YYUSE (yymsg);
    YYUSE (yyvaluep);

    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

    switch (yytype)
      {
  
	default:
	  break;
      }
  }

  void
  parser::yypop_ (unsigned int n)
  {
    yystate_stack_.pop (n);
    yysemantic_stack_.pop (n);
    yylocation_stack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif

  inline bool
  parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::parse ()
  {
    /// Lookahead and lookahead in internal form.
    int yychar = yyempty_;
    int yytoken = 0;

    // State.
    int yyn;
    int yylen = 0;
    int yystate = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// Semantic value of the lookahead.
    static semantic_type yyval_default;
    semantic_type yylval = yyval_default;
    /// Location of the lookahead.
    location_type yylloc;
    /// The locations where the error started and ended.
    location_type yyerror_range[3];

    /// $$.
    semantic_type yyval;
    /// @$.
    location_type yyloc;

    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


/* User initialization code.  */
/* Line 545 of lalr1.cc  */
#line 17 "MINIC.y"
{
// Filename for locations here
yylloc.begin.filename = yylloc.end.filename = new std::string("test.txt");
}
/* Line 545 of lalr1.cc  */
#line 351 "MINIC.tab.cpp"

    /* Initialize the stacks.  The initial state will be pushed in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystate_stack_ = state_stack_type (0);
    yysemantic_stack_ = semantic_stack_type (0);
    yylocation_stack_ = location_stack_type (0);
    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yylloc);

    /* New state.  */
  yynewstate:
    yystate_stack_.push (yystate);
    YYCDEBUG << "Entering state " << yystate << std::endl;

    /* Accept?  */
    if (yystate == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    /* Backup.  */
  yybackup:

    /* Try to take a decision without lookahead.  */
    yyn = yypact_[yystate];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    /* Read a lookahead token.  */
    if (yychar == yyempty_)
      {
        YYCDEBUG << "Reading a token: ";
        yychar = yylex (&yylval, &yylloc);
      }

    /* Convert token to internal form.  */
    if (yychar <= yyeof_)
      {
	yychar = yytoken = yyeof_;
	YYCDEBUG << "Now at end of input." << std::endl;
      }
    else
      {
	yytoken = yytranslate_ (yychar);
	YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
      }

    /* If the proper action on seeing token YYTOKEN is to reduce or to
       detect an error, take that action.  */
    yyn += yytoken;
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yytoken)
      goto yydefault;

    /* Reduce or error.  */
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
	if (yy_table_value_is_error_ (yyn))
	  goto yyerrlab;
	yyn = -yyn;
	goto yyreduce;
      }

    /* Shift the lookahead token.  */
    YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

    /* Discard the token being shifted.  */
    yychar = yyempty_;

    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yylloc);

    /* Count tokens shifted since error; after three, turn off error
       status.  */
    if (yyerrstatus_)
      --yyerrstatus_;

    yystate = yyn;
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystate];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    /* If YYLEN is nonzero, implement the default value of the action:
       `$$ = $1'.  Otherwise, use the top of the stack.

       Otherwise, the following line sets YYVAL to garbage.
       This behavior is undocumented and Bison
       users should not rely upon it.  */
    if (yylen)
      yyval = yysemantic_stack_[yylen - 1];
    else
      yyval = yysemantic_stack_[0];

    // Compute the default @$.
    {
      slice<location_type, location_stack_type> slice (yylocation_stack_, yylen);
      YYLLOC_DEFAULT (yyloc, slice, yylen);
    }

    // Perform the reduction.
    YY_REDUCE_PRINT (yyn);
    switch (yyn)
      {
          case 2:
/* Line 670 of lalr1.cc  */
#line 58 "MINIC.y"
    { (yyval.node)=g_root= new CCompileUnit((yysemantic_stack_[(1) - (1)].node));}
    break;

  case 3:
/* Line 670 of lalr1.cc  */
#line 59 "MINIC.y"
    { (yyval.node)=g_root= new CCompileUnit((yysemantic_stack_[(2) - (1)].node),(yysemantic_stack_[(2) - (2)].node));}
    break;

  case 4:
/* Line 670 of lalr1.cc  */
#line 60 "MINIC.y"
    { (yyval.node)=g_root= new CCompileUnit((yysemantic_stack_[(1) - (1)].node));}
    break;

  case 5:
/* Line 670 of lalr1.cc  */
#line 61 "MINIC.y"
    { (yyval.node)=g_root= new CCompileUnit((yysemantic_stack_[(2) - (1)].node),(yysemantic_stack_[(2) - (2)].node));}
    break;

  case 6:
/* Line 670 of lalr1.cc  */
#line 64 "MINIC.y"
    { (yyval.node) = new CFunctionDefinition((yysemantic_stack_[(6) - (2)].node),(yysemantic_stack_[(6) - (4)].node),(yysemantic_stack_[(6) - (6)].node));
																			g_symbolTable.GetSymbol(((CIDENTIFIER *)(yysemantic_stack_[(6) - (2)].node))->m_text)->syntaxNode =(yyval.node);
																		   }
    break;

  case 7:
/* Line 670 of lalr1.cc  */
#line 67 "MINIC.y"
    { (yyval.node) = new CFunctionDefinition((yysemantic_stack_[(5) - (2)].node),(yysemantic_stack_[(5) - (5)].node));
																		g_symbolTable.GetSymbol(((CIDENTIFIER *)(yysemantic_stack_[(5) - (2)].node))->m_text)->syntaxNode =(yyval.node);
																	   }
    break;

  case 8:
/* Line 670 of lalr1.cc  */
#line 72 "MINIC.y"
    { (yyval.node) = new CFormalArgs((yysemantic_stack_[(1) - (1)].node)); }
    break;

  case 9:
/* Line 670 of lalr1.cc  */
#line 73 "MINIC.y"
    { (yyval.node) = new CFormalArgs((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node)); }
    break;

  case 10:
/* Line 670 of lalr1.cc  */
#line 76 "MINIC.y"
    { (yyval.node) = new CExpressionStatement((yysemantic_stack_[(2) - (1)].node)) ;}
    break;

  case 12:
/* Line 670 of lalr1.cc  */
#line 78 "MINIC.y"
    { (yyval.node) = new CSelectionStatement((yysemantic_stack_[(1) - (1)].node))  ;}
    break;

  case 16:
/* Line 670 of lalr1.cc  */
#line 82 "MINIC.y"
    { (yyval.node) = new CReturnStatement((yysemantic_stack_[(3) - (2)].node)) ;}
    break;

  case 17:
/* Line 670 of lalr1.cc  */
#line 83 "MINIC.y"
    { (yyval.node) = new CBreakStatement() ;}
    break;

  case 18:
/* Line 670 of lalr1.cc  */
#line 84 "MINIC.y"
    { (yyval.node) = new CNullStatement() ;}
    break;

  case 19:
/* Line 670 of lalr1.cc  */
#line 86 "MINIC.y"
    { (yyval.node) = (yysemantic_stack_[(1) - (1)].node);}
    break;

  case 20:
/* Line 670 of lalr1.cc  */
#line 87 "MINIC.y"
    { (yyval.node) = (yysemantic_stack_[(1) - (1)].node);}
    break;

  case 21:
/* Line 670 of lalr1.cc  */
#line 90 "MINIC.y"
    { (yyval.node) = new CIfStatement((yysemantic_stack_[(5) - (3)].node),(yysemantic_stack_[(5) - (5)].node)) ;}
    break;

  case 22:
/* Line 670 of lalr1.cc  */
#line 91 "MINIC.y"
    { (yyval.node) = new CIfStatement((yysemantic_stack_[(7) - (3)].node),(yysemantic_stack_[(7) - (5)].node),(yysemantic_stack_[(7) - (7)].node)) ;}
    break;

  case 23:
/* Line 670 of lalr1.cc  */
#line 94 "MINIC.y"
    { (yyval.node) = new CSwitchStatement((yysemantic_stack_[(7) - (3)].node),(yysemantic_stack_[(7) - (6)].node));}
    break;

  case 24:
/* Line 670 of lalr1.cc  */
#line 95 "MINIC.y"
    { (yyval.node) = new CSwitchStatement((yysemantic_stack_[(8) - (3)].node),(yysemantic_stack_[(8) - (6)].node),(yysemantic_stack_[(8) - (7)].node));}
    break;

  case 25:
/* Line 670 of lalr1.cc  */
#line 98 "MINIC.y"
    { (yyval.node) = new CCaseOptions((yysemantic_stack_[(4) - (2)].node),(yysemantic_stack_[(4) - (4)].node));}
    break;

  case 26:
/* Line 670 of lalr1.cc  */
#line 99 "MINIC.y"
    { (yyval.node) = new CCaseOptions((yysemantic_stack_[(3) - (2)].node));}
    break;

  case 27:
/* Line 670 of lalr1.cc  */
#line 100 "MINIC.y"
    { (yyval.node) = new CCaseOptions((yysemantic_stack_[(5) - (1)].node),(yysemantic_stack_[(5) - (3)].node),(yysemantic_stack_[(5) - (5)].node));}
    break;

  case 28:
/* Line 670 of lalr1.cc  */
#line 101 "MINIC.y"
    { (yyval.node) = new CCaseOptions((yysemantic_stack_[(4) - (1)].node),(yysemantic_stack_[(4) - (3)].node));}
    break;

  case 29:
/* Line 670 of lalr1.cc  */
#line 104 "MINIC.y"
    { (yyval.node) = new CDefaultOption((yysemantic_stack_[(3) - (3)].node));}
    break;

  case 30:
/* Line 670 of lalr1.cc  */
#line 107 "MINIC.y"
    { (yyval.node) = new CWhileStatement((yysemantic_stack_[(5) - (3)].node),(yysemantic_stack_[(5) - (5)].node)) ;}
    break;

  case 31:
/* Line 670 of lalr1.cc  */
#line 110 "MINIC.y"
    {(yyval.node) = new CDoWhileStatement((yysemantic_stack_[(7) - (2)].node),(yysemantic_stack_[(7) - (5)].node)) ;}
    break;

  case 32:
/* Line 670 of lalr1.cc  */
#line 113 "MINIC.y"
    {(yyval.node) = new CForStatement((yysemantic_stack_[(6) - (6)].node));}
    break;

  case 33:
/* Line 670 of lalr1.cc  */
#line 114 "MINIC.y"
    {(yyval.node) = new CForStatement((yysemantic_stack_[(8) - (4)].node),(yysemantic_stack_[(8) - (6)].node),(yysemantic_stack_[(8) - (8)].node));}
    break;

  case 34:
/* Line 670 of lalr1.cc  */
#line 115 "MINIC.y"
    {(yyval.node) = new CForStatement((yysemantic_stack_[(9) - (3)].node),(yysemantic_stack_[(9) - (5)].node),(yysemantic_stack_[(9) - (7)].node),(yysemantic_stack_[(9) - (9)].node));}
    break;

  case 35:
/* Line 670 of lalr1.cc  */
#line 118 "MINIC.y"
    { (yyval.node) = new CCompoundStatement() ;}
    break;

  case 36:
/* Line 670 of lalr1.cc  */
#line 119 "MINIC.y"
    { (yyval.node) = new CCompoundStatement((yysemantic_stack_[(3) - (2)].node)) ;}
    break;

  case 37:
/* Line 670 of lalr1.cc  */
#line 121 "MINIC.y"
    { (yyval.node) = new CStatementList((yysemantic_stack_[(1) - (1)].node)) ;}
    break;

  case 38:
/* Line 670 of lalr1.cc  */
#line 122 "MINIC.y"
    { (yyval.node) = new CStatementList((yysemantic_stack_[(2) - (1)].node),(yysemantic_stack_[(2) - (2)].node)) ;}
    break;

  case 39:
/* Line 670 of lalr1.cc  */
#line 125 "MINIC.y"
    { (yyval.node) = (yysemantic_stack_[(3) - (2)].node);}
    break;

  case 40:
/* Line 670 of lalr1.cc  */
#line 128 "MINIC.y"
    { (yyval.node) = new CElems((yysemantic_stack_[(1) - (1)].node));}
    break;

  case 41:
/* Line 670 of lalr1.cc  */
#line 129 "MINIC.y"
    { (yyval.node) = new CElems((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));}
    break;

  case 42:
/* Line 670 of lalr1.cc  */
#line 132 "MINIC.y"
    { (yyval.node) = new CElem((yysemantic_stack_[(1) - (1)].node));}
    break;

  case 43:
/* Line 670 of lalr1.cc  */
#line 133 "MINIC.y"
    { (yyval.node) = new CElem((yysemantic_stack_[(1) - (1)].node));}
    break;

  case 44:
/* Line 670 of lalr1.cc  */
#line 136 "MINIC.y"
    { (yyval.node) = (yysemantic_stack_[(1) - (1)].node); }
    break;

  case 45:
/* Line 670 of lalr1.cc  */
#line 137 "MINIC.y"
    { (yyval.node) = new CExpressionVariable((yysemantic_stack_[(1) - (1)].node));
											  g_symbolTable.GetSymbol(((CIDENTIFIER *)(yysemantic_stack_[(1) - (1)].node))->m_text)->syntaxNode =(yyval.node);
											}
    break;

  case 46:
/* Line 670 of lalr1.cc  */
#line 140 "MINIC.y"
    { (yyval.node) = new CArray((yysemantic_stack_[(1) - (1)].node));}
    break;

  case 47:
/* Line 670 of lalr1.cc  */
#line 141 "MINIC.y"
    { (yyval.node) = new CExpressionFCall((yysemantic_stack_[(3) - (1)].node)); }
    break;

  case 48:
/* Line 670 of lalr1.cc  */
#line 142 "MINIC.y"
    { (yyval.node) = new CExpressionFCall((yysemantic_stack_[(4) - (1)].node),(yysemantic_stack_[(4) - (3)].node)); }
    break;

  case 49:
/* Line 670 of lalr1.cc  */
#line 143 "MINIC.y"
    { 
											  (yyval.node) = new CExpressionArray((yysemantic_stack_[(4) - (1)].node),(yysemantic_stack_[(4) - (3)].node));
											}
    break;

  case 50:
/* Line 670 of lalr1.cc  */
#line 146 "MINIC.y"
    { (yyval.node) = new CExpressionAdd((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node)); }
    break;

  case 51:
/* Line 670 of lalr1.cc  */
#line 147 "MINIC.y"
    { (yyval.node) = new CExpressionMinus((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node)); }
    break;

  case 52:
/* Line 670 of lalr1.cc  */
#line 148 "MINIC.y"
    { (yyval.node) = new CExpressionMult((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node)); }
    break;

  case 53:
/* Line 670 of lalr1.cc  */
#line 149 "MINIC.y"
    { (yyval.node) = new CExpressionDiv((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node)); }
    break;

  case 54:
/* Line 670 of lalr1.cc  */
#line 150 "MINIC.y"
    { (yyval.node) = new CExpressionUnaryPlus((yysemantic_stack_[(2) - (2)].node)); }
    break;

  case 55:
/* Line 670 of lalr1.cc  */
#line 151 "MINIC.y"
    { (yyval.node) = new CExpressionUnaryMinus((yysemantic_stack_[(2) - (2)].node)); }
    break;

  case 56:
/* Line 670 of lalr1.cc  */
#line 152 "MINIC.y"
    { (yyval.node) = new CExpressionPostFixPlus((yysemantic_stack_[(2) - (1)].node)); }
    break;

  case 57:
/* Line 670 of lalr1.cc  */
#line 153 "MINIC.y"
    { (yyval.node) = new CExpressionPostFixMinus((yysemantic_stack_[(2) - (1)].node)); }
    break;

  case 58:
/* Line 670 of lalr1.cc  */
#line 154 "MINIC.y"
    { (yyval.node) = (yysemantic_stack_[(3) - (2)].node);}
    break;

  case 59:
/* Line 670 of lalr1.cc  */
#line 155 "MINIC.y"
    { (yyval.node) = new CExpressionAssign((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node)); }
    break;

  case 60:
/* Line 670 of lalr1.cc  */
#line 156 "MINIC.y"
    { (yyval.node) = new CExpressionAND((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node)); }
    break;

  case 61:
/* Line 670 of lalr1.cc  */
#line 157 "MINIC.y"
    { (yyval.node) = new CExpressionOR((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node)); }
    break;

  case 62:
/* Line 670 of lalr1.cc  */
#line 158 "MINIC.y"
    { (yyval.node) = new CExpressionNOT((yysemantic_stack_[(2) - (2)].node)); }
    break;

  case 63:
/* Line 670 of lalr1.cc  */
#line 159 "MINIC.y"
    { (yyval.node) = new CExpressionGT((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node)); }
    break;

  case 64:
/* Line 670 of lalr1.cc  */
#line 160 "MINIC.y"
    { (yyval.node) = new CExpressionGTE((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node)); }
    break;

  case 65:
/* Line 670 of lalr1.cc  */
#line 161 "MINIC.y"
    { (yyval.node) = new CExpressionLT((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node)); }
    break;

  case 66:
/* Line 670 of lalr1.cc  */
#line 162 "MINIC.y"
    { (yyval.node) = new CExpressionLTE((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node)); }
    break;

  case 67:
/* Line 670 of lalr1.cc  */
#line 163 "MINIC.y"
    { (yyval.node) = new CExpressionEQUAL((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node)); }
    break;

  case 68:
/* Line 670 of lalr1.cc  */
#line 164 "MINIC.y"
    { (yyval.node) = new CExpressionNEQUAL((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node)); }
    break;

  case 69:
/* Line 670 of lalr1.cc  */
#line 167 "MINIC.y"
    { (yyval.node) = new CActualArgs((yysemantic_stack_[(1) - (1)].node)); }
    break;

  case 70:
/* Line 670 of lalr1.cc  */
#line 168 "MINIC.y"
    { (yyval.node) = new CActualArgs((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node)); }
    break;


/* Line 670 of lalr1.cc  */
#line 869 "MINIC.tab.cpp"
      default:
        break;
      }

    /* User semantic actions sometimes alter yychar, and that requires
       that yytoken be updated with the new translation.  We take the
       approach of translating immediately before every use of yytoken.
       One alternative is translating here after every semantic action,
       but that translation would be missed if the semantic action
       invokes YYABORT, YYACCEPT, or YYERROR immediately after altering
       yychar.  In the case of YYABORT or YYACCEPT, an incorrect
       destructor might then be invoked immediately.  In the case of
       YYERROR, subsequent parser actions might lead to an incorrect
       destructor call or verbose syntax error message before the
       lookahead is translated.  */
    YY_SYMBOL_PRINT ("-> $$ =", yyr1_[yyn], &yyval, &yyloc);

    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();

    yysemantic_stack_.push (yyval);
    yylocation_stack_.push (yyloc);

    /* Shift the result of the reduction.  */
    yyn = yyr1_[yyn];
    yystate = yypgoto_[yyn - yyntokens_] + yystate_stack_[0];
    if (0 <= yystate && yystate <= yylast_
	&& yycheck_[yystate] == yystate_stack_[0])
      yystate = yytable_[yystate];
    else
      yystate = yydefgoto_[yyn - yyntokens_];
    goto yynewstate;

  /*------------------------------------.
  | yyerrlab -- here on detecting error |
  `------------------------------------*/
  yyerrlab:
    /* Make sure we have latest lookahead translation.  See comments at
       user semantic actions for why this is necessary.  */
    yytoken = yytranslate_ (yychar);

    /* If not already recovering from an error, report this error.  */
    if (!yyerrstatus_)
      {
	++yynerrs_;
	if (yychar == yyempty_)
	  yytoken = yyempty_;
	error (yylloc, yysyntax_error_ (yystate, yytoken));
      }

    yyerror_range[1] = yylloc;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */
        if (yychar <= yyeof_)
          {
            /* Return failure if at end of input.  */
            if (yychar == yyeof_)
              YYABORT;
          }
        else
          {
            yydestruct_ ("Error: discarding", yytoken, &yylval, &yylloc);
            yychar = yyempty_;
          }
      }

    /* Else will try to reuse lookahead token after shifting the error
       token.  */
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;

    yyerror_range[1] = yylocation_stack_[yylen - 1];
    /* Do not reclaim the symbols of the rule which action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    yystate = yystate_stack_[0];
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;	/* Each real token shifted decrements this.  */

    for (;;)
      {
	yyn = yypact_[yystate];
	if (!yy_pact_value_is_default_ (yyn))
	{
	  yyn += yyterror_;
	  if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
	    {
	      yyn = yytable_[yyn];
	      if (0 < yyn)
		break;
	    }
	}

	/* Pop the current state because it cannot handle the error token.  */
	if (yystate_stack_.height () == 1)
	  YYABORT;

	yyerror_range[1] = yylocation_stack_[0];
	yydestruct_ ("Error: popping",
		     yystos_[yystate],
		     &yysemantic_stack_[0], &yylocation_stack_[0]);
	yypop_ ();
	yystate = yystate_stack_[0];
	YY_STACK_PRINT ();
      }

    yyerror_range[2] = yylloc;
    // Using YYLLOC is tempting, but would change the location of
    // the lookahead.  YYLOC is available though.
    YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yyloc);

    /* Shift the error token.  */
    YY_SYMBOL_PRINT ("Shifting", yystos_[yyn],
		     &yysemantic_stack_[0], &yylocation_stack_[0]);

    yystate = yyn;
    goto yynewstate;

    /* Accept.  */
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    /* Abort.  */
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (yychar != yyempty_)
      {
        /* Make sure we have latest lookahead translation.  See comments
           at user semantic actions for why this is necessary.  */
        yytoken = yytranslate_ (yychar);
        yydestruct_ ("Cleanup: discarding lookahead", yytoken, &yylval,
                     &yylloc);
      }

    /* Do not reclaim the symbols of the rule which action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystate_stack_.height ())
      {
        yydestruct_ ("Cleanup: popping",
                     yystos_[yystate_stack_[0]],
                     &yysemantic_stack_[0],
                     &yylocation_stack_[0]);
        yypop_ ();
      }

    return yyresult;
    }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (yychar != yyempty_)
          {
            /* Make sure we have latest lookahead translation.  See
               comments at user semantic actions for why this is
               necessary.  */
            yytoken = yytranslate_ (yychar);
            yydestruct_ (YY_NULL, yytoken, &yylval, &yylloc);
          }

        while (1 < yystate_stack_.height ())
          {
            yydestruct_ (YY_NULL,
                         yystos_[yystate_stack_[0]],
                         &yysemantic_stack_[0],
                         &yylocation_stack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  // Generate an error message.
  std::string
  parser::yysyntax_error_ (int yystate, int yytoken)
  {
    std::string yyres;
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yytoken) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yychar.
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (yytoken != yyempty_)
      {
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            /* Stay within bounds of both yycheck and yytname.  */
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULL;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
        YYCASE_(0, YY_("syntax error"));
        YYCASE_(1, YY_("syntax error, unexpected %s"));
        YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
  const short int parser::yypact_ninf_ = -132;
  const short int
  parser::yypact_[] =
  {
       199,   -17,  -132,   222,   -33,   -26,   -13,    31,     5,    79,
      17,   222,   222,   222,   222,  -132,    24,   152,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,   262,   222,
      95,   222,   283,  -132,   222,   222,    25,   222,    48,   210,
     -25,   -25,    23,   304,  -132,  -132,   163,   -27,    13,  -132,
     262,  -132,  -132,  -132,   222,   222,   222,   222,   222,   222,
     222,   222,   220,   220,   222,   222,  -132,   222,   556,  -132,
     556,     8,   556,  -132,   325,   346,    -2,   367,    54,   212,
     388,  -132,  -132,  -132,   222,  -132,   576,   595,   614,   614,
     614,   614,   614,   614,   -25,   -25,    23,    23,   240,  -132,
     222,    79,    44,  -132,    56,    45,    79,   222,    61,   409,
     222,  -132,  -132,   556,    88,    81,    24,  -132,    56,    97,
    -132,   430,    79,   222,   451,    79,   222,    38,  -132,  -132,
      66,  -132,   472,   222,  -132,   493,   222,    64,  -132,    67,
    -132,    79,   514,    79,   535,    79,  -132,  -132,    79,    79,
      79,    79,  -132,    79
  };

  /* YYDEFACT[S] -- default reduction number in state S.  Performed when
     YYTABLE doesn't specify something else to do.  Zero means the
     default is an error.  */
  const unsigned char
  parser::yydefact_[] =
  {
         0,    45,    44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    18,     0,     0,     4,     2,
      12,    19,    20,    13,    14,    15,    11,    46,     0,     0,
       0,     0,     0,    17,     0,     0,     0,     0,     0,     0,
      55,    54,    62,     0,    35,    37,     0,    46,     0,    40,
      42,     1,     5,     3,     0,     0,     0,     0,     0,     0,
       0,     0,    57,    56,     0,     0,    10,     0,    59,    47,
      69,     0,    42,    16,     0,     0,     0,     0,     0,     0,
       0,    58,    36,    38,     0,    39,    61,    60,    68,    67,
      65,    66,    63,    64,    51,    50,    53,    52,     0,    48,
       0,     0,     0,     8,     0,     0,     0,     0,     0,     0,
       0,    41,    49,    70,    21,     0,     0,     7,     0,     0,
      30,     0,     0,     0,     0,     0,     0,     0,     6,     9,
       0,    32,     0,     0,    22,     0,     0,     0,    23,     0,
      31,     0,     0,    26,     0,     0,    24,    33,     0,    25,
      28,    29,    34,    27
  };

  /* YYPGOTO[NTERM-NUM].  */
  const short int
  parser::yypgoto_[] =
  {
      -132,  -132,    87,  -132,     0,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,  -100,  -131,    -6,  -132,    29,    10,  -132
  };

  /* YYDEFGOTO[NTERM-NUM].  */
  const short int
  parser::yydefgoto_[] =
  {
        -1,    17,    18,   105,    45,    20,    21,    22,   127,   139,
      23,    24,    25,    26,    46,    27,    48,    49,    28,    71
  };

  /* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule which
     number is the opposite.  If YYTABLE_NINF_, syntax error.  */
  const signed char parser::yytable_ninf_ = -44;
  const short int
  parser::yytable_[] =
  {
        19,   103,    29,    33,   117,    64,    65,    34,   -43,    38,
      47,   -43,   149,    32,   151,    67,    30,    53,   128,   153,
      35,    40,    41,    42,    43,    47,    50,     1,     2,     3,
       4,     5,   104,     6,    36,     8,     9,    10,    37,    68,
      70,    72,    99,   100,    74,    75,    83,    77,    84,    80,
      39,    85,    11,    12,   136,   137,    13,    14,    76,    78,
      15,    16,    44,    67,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,   138,    98,    47,   118,
     119,   115,     1,     2,     3,     4,     5,   107,     6,   109,
       8,     9,    10,   116,    72,   122,   125,   126,     1,     2,
     129,   114,   140,   145,    52,   146,   120,    11,    12,     0,
     113,    13,    14,   111,     0,    15,    16,   121,     0,     0,
     124,     0,   131,    11,    12,   134,     0,    13,    14,    69,
       0,     0,    31,   132,     0,     0,   135,     0,     0,     0,
       0,   147,     0,   142,     0,     0,   144,     0,   152,    83,
       0,    83,    51,    83,     0,     1,     2,     3,     4,     5,
       0,     6,     7,     8,     9,    10,     1,     2,     3,     4,
       5,     0,     6,     0,     8,     9,    10,     0,     0,     0,
      11,    12,     0,     0,    13,    14,     0,     0,    15,    16,
       0,    11,    12,     0,     0,    13,    14,     0,     0,    15,
      16,    82,     1,     2,     3,     4,     5,     0,     6,     7,
       8,     9,    10,     1,     2,     1,     2,     0,     0,     0,
       0,     0,     0,     1,     2,     1,     2,    11,    12,     0,
       0,    13,    14,     0,     0,    15,    16,     0,    11,    12,
      11,    12,    13,    14,    13,    14,    79,    31,   108,    31,
      11,    12,    13,    14,    13,    14,     0,    31,     0,    31,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,     0,     0,     0,     0,     0,     0,     0,     0,
      67,   112,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,     0,     0,     0,     0,    66,     0,
       0,     0,    67,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,     0,     0,     0,     0,    73,
       0,     0,     0,    67,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,     0,     0,    81,     0,
       0,     0,     0,     0,    67,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,     0,     0,   101,
       0,     0,     0,     0,     0,    67,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,     0,     0,
     102,     0,     0,     0,     0,     0,    67,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,     0,
       0,   106,     0,     0,     0,     0,     0,    67,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
       0,     0,     0,     0,   110,     0,     0,     0,    67,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,     0,     0,     0,     0,   123,     0,     0,     0,    67,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,     0,     0,   130,     0,     0,     0,     0,     0,
      67,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,     0,     0,     0,     0,   133,     0,     0,
       0,    67,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,     0,     0,   141,     0,     0,     0,
       0,     0,    67,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,     0,     0,     0,     0,     0,
       0,     0,   143,    67,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,     0,     0,   148,     0,
       0,     0,     0,     0,    67,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,     0,     0,     0,
       0,     0,     0,     0,   150,    67,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,     0,     0,
       0,     0,     0,     0,     0,     0,    67,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,     0,     0,
       0,     0,     0,     0,     0,     0,    67,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,     0,     0,     0,
       0,     0,     0,     0,     0,    67,   -44,   -44,   -44,   -44,
     -44,   -44,    62,    63,    64,    65,     0,     0,     0,     0,
       0,     0,     0,     0,    67
  };

  /* YYCHECK.  */
  const short int
  parser::yycheck_[] =
  {
         0,     3,    19,    36,   104,    30,    31,    33,    35,     9,
      16,    38,   143,     3,   145,    40,    33,    17,   118,   150,
      33,    11,    12,    13,    14,    31,    16,     3,     4,     5,
       6,     7,    34,     9,     3,    11,    12,    13,    33,    29,
      30,    31,    34,    35,    34,    35,    46,    37,    35,    39,
      33,    38,    28,    29,    16,    17,    32,    33,    33,    11,
      36,    37,    38,    40,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    38,    67,    84,    34,
      35,    37,     3,     4,     5,     6,     7,    33,     9,    79,
      11,    12,    13,    37,    84,    34,     8,    16,     3,     4,
       3,   101,    36,    39,    17,    38,   106,    28,    29,    -1,
     100,    32,    33,    84,    -1,    36,    37,   107,    -1,    -1,
     110,    -1,   122,    28,    29,   125,    -1,    32,    33,    34,
      -1,    -1,    37,   123,    -1,    -1,   126,    -1,    -1,    -1,
      -1,   141,    -1,   133,    -1,    -1,   136,    -1,   148,   149,
      -1,   151,     0,   153,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,     3,     4,     5,     6,
       7,    -1,     9,    -1,    11,    12,    13,    -1,    -1,    -1,
      28,    29,    -1,    -1,    32,    33,    -1,    -1,    36,    37,
      -1,    28,    29,    -1,    -1,    32,    33,    -1,    -1,    36,
      37,    38,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,     3,     4,     3,     4,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     3,     4,    28,    29,    -1,
      -1,    32,    33,    -1,    -1,    36,    37,    -1,    28,    29,
      28,    29,    32,    33,    32,    33,    36,    37,    36,    37,
      28,    29,    32,    33,    32,    33,    -1,    37,    -1,    37,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    40,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    40,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    40,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    40,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    40,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    40,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    40,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    40,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      40,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    40,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    40,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    40,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40
  };

  /* STOS_[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
  const unsigned char
  parser::yystos_[] =
  {
         0,     3,     4,     5,     6,     7,     9,    10,    11,    12,
      13,    28,    29,    32,    33,    36,    37,    43,    44,    46,
      47,    48,    49,    52,    53,    54,    55,    57,    60,    19,
      33,    37,    60,    36,    33,    33,     3,    33,    46,    33,
      60,    60,    60,    60,    38,    46,    56,    57,    58,    59,
      60,     0,    44,    46,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    36,    40,    60,    34,
      60,    61,    60,    36,    60,    60,    33,    60,    11,    36,
      60,    34,    38,    46,    35,    38,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    34,
      35,    34,    34,     3,    34,    45,    34,    33,    36,    60,
      36,    59,    41,    60,    46,    37,    37,    55,    34,    35,
      46,    60,    34,    36,    60,     8,    16,    50,    55,     3,
      34,    46,    60,    36,    46,    60,    16,    17,    38,    51,
      36,    34,    60,    39,    60,    39,    38,    46,    34,    56,
      39,    56,    46,    56
  };

#if YYDEBUG
  /* TOKEN_NUMBER_[YYLEX-NUM] -- Internal symbol number corresponding
     to YYLEX-NUM.  */
  const unsigned short int
  parser::yytoken_number_[] =
  {
         0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,    61,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,    40,    41,    44,    59,   123,   125,    58,
      91,    93
  };
#endif

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
  const unsigned char
  parser::yyr1_[] =
  {
         0,    42,    43,    43,    43,    43,    44,    44,    45,    45,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    47,
      47,    48,    48,    49,    49,    50,    50,    50,    50,    51,
      52,    53,    54,    54,    54,    55,    55,    56,    56,    57,
      58,    58,    59,    59,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    61,
      61
  };

  /* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
  const unsigned char
  parser::yyr2_[] =
  {
         0,     2,     1,     2,     1,     2,     6,     5,     1,     3,
       2,     1,     1,     1,     1,     1,     3,     2,     1,     1,
       1,     5,     7,     7,     8,     4,     3,     5,     4,     3,
       5,     7,     6,     8,     9,     2,     3,     1,     2,     3,
       1,     3,     1,     1,     1,     1,     1,     3,     4,     4,
       3,     3,     3,     3,     2,     2,     2,     2,     3,     3,
       3,     3,     2,     3,     3,     3,     3,     3,     3,     1,
       3
  };


  /* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
     First, the terminals, then, starting at \a yyntokens_, nonterminals.  */
  const char*
  const parser::yytname_[] =
  {
    "$end", "error", "$undefined", "IDENTIFIER", "NUMBER", "RETURN",
  "BREAK", "IF", "ELSE", "SWITCH", "FUNCTION", "WHILE", "DO", "FOR", "INT",
  "FLOAT", "CASE", "DEFAULT", "IFPREC", "'='", "OR", "AND", "NEQUAL",
  "EQUAL", "LT", "LTE", "GT", "GTE", "MINUS", "PLUS", "DIV", "MULT", "NOT",
  "'('", "')'", "','", "';'", "'{'", "'}'", "':'", "'['", "']'", "$accept",
  "compile_unit", "function_definition", "fargs", "statement",
  "selection_statement", "if_statement", "switch_statement",
  "case_options", "default_option", "while_statement",
  "do_while_statement", "for_statement", "compound_statement",
  "statement_list", "array", "elems", "elem", "expression", "args", YY_NULL
  };

#if YYDEBUG
  /* YYRHS -- A `-1'-separated list of the rules' RHS.  */
  const parser::rhs_number_type
  parser::yyrhs_[] =
  {
        43,     0,    -1,    46,    -1,    43,    46,    -1,    44,    -1,
      43,    44,    -1,    10,     3,    33,    45,    34,    55,    -1,
      10,     3,    33,    34,    55,    -1,     3,    -1,    45,    35,
       3,    -1,    60,    36,    -1,    55,    -1,    47,    -1,    52,
      -1,    53,    -1,    54,    -1,     5,    60,    36,    -1,     6,
      36,    -1,    36,    -1,    48,    -1,    49,    -1,     7,    33,
      60,    34,    46,    -1,     7,    33,    60,    34,    46,     8,
      46,    -1,     9,    33,    60,    34,    37,    50,    38,    -1,
       9,    33,    60,    34,    37,    50,    51,    38,    -1,    16,
      60,    39,    56,    -1,    16,    60,    39,    -1,    50,    16,
      60,    39,    56,    -1,    50,    16,    60,    39,    -1,    17,
      39,    56,    -1,    11,    33,    60,    34,    46,    -1,    12,
      46,    11,    33,    60,    34,    36,    -1,    13,    33,    36,
      36,    34,    46,    -1,    13,    33,    36,    60,    36,    60,
      34,    46,    -1,    13,    33,    60,    36,    60,    36,    60,
      34,    46,    -1,    37,    38,    -1,    37,    56,    38,    -1,
      46,    -1,    56,    46,    -1,    37,    58,    38,    -1,    59,
      -1,    58,    35,    59,    -1,    60,    -1,    57,    -1,     4,
      -1,     3,    -1,    57,    -1,     3,    33,    34,    -1,     3,
      33,    61,    34,    -1,    60,    40,    60,    41,    -1,    60,
      29,    60,    -1,    60,    28,    60,    -1,    60,    31,    60,
      -1,    60,    30,    60,    -1,    29,    60,    -1,    28,    60,
      -1,    60,    29,    -1,    60,    28,    -1,    33,    60,    34,
      -1,     3,    19,    60,    -1,    60,    21,    60,    -1,    60,
      20,    60,    -1,    32,    60,    -1,    60,    26,    60,    -1,
      60,    27,    60,    -1,    60,    24,    60,    -1,    60,    25,
      60,    -1,    60,    23,    60,    -1,    60,    22,    60,    -1,
      60,    -1,    61,    35,    60,    -1
  };

  /* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
     YYRHS.  */
  const unsigned short int
  parser::yyprhs_[] =
  {
         0,     0,     3,     5,     8,    10,    13,    20,    26,    28,
      32,    35,    37,    39,    41,    43,    45,    49,    52,    54,
      56,    58,    64,    72,    80,    89,    94,    98,   104,   109,
     113,   119,   127,   134,   143,   153,   156,   160,   162,   165,
     169,   171,   175,   177,   179,   181,   183,   185,   189,   194,
     199,   203,   207,   211,   215,   218,   221,   224,   227,   231,
     235,   239,   243,   246,   250,   254,   258,   262,   266,   270,
     272
  };

  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
  const unsigned char
  parser::yyrline_[] =
  {
         0,    58,    58,    59,    60,    61,    64,    67,    72,    73,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    86,
      87,    90,    91,    94,    95,    98,    99,   100,   101,   104,
     107,   110,   113,   114,   115,   118,   119,   121,   122,   125,
     128,   129,   132,   133,   136,   137,   140,   141,   142,   143,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   167,
     168
  };

  // Print the state stack on the debug stream.
  void
  parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (state_stack_type::const_iterator i = yystate_stack_.begin ();
	 i != yystate_stack_.end (); ++i)
      *yycdebug_ << ' ' << *i;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  parser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    /* Print the symbols being reduced, and their result.  */
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
	       << " (line " << yylno << "):" << std::endl;
    /* The symbols being reduced.  */
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
		       yyrhs_[yyprhs_[yyrule] + yyi],
		       &(yysemantic_stack_[(yynrhs) - (yyi + 1)]),
		       &(yylocation_stack_[(yynrhs) - (yyi + 1)]));
  }
#endif // YYDEBUG

  /* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
  parser::token_number_type
  parser::yytranslate_ (int t)
  {
    static
    const token_number_type
    translate_table[] =
    {
           0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      33,    34,     2,     2,    35,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    39,    36,
       2,    19,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    40,     2,    41,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,     2,    38,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32
    };
    if ((unsigned int) t <= yyuser_token_number_max_)
      return translate_table[t];
    else
      return yyundef_token_;
  }

  const int parser::yyeof_ = 0;
  const int parser::yylast_ = 654;
  const int parser::yynnts_ = 20;
  const int parser::yyempty_ = -2;
  const int parser::yyfinal_ = 51;
  const int parser::yyterror_ = 1;
  const int parser::yyerrcode_ = 256;
  const int parser::yyntokens_ = 42;

  const unsigned int parser::yyuser_token_number_max_ = 286;
  const parser::token_number_type parser::yyundef_token_ = 2;


} // yy
/* Line 1141 of lalr1.cc  */
#line 1613 "MINIC.tab.cpp"
/* Line 1142 of lalr1.cc  */
#line 170 "MINIC.y"


namespace yy{
	void parser::error(yy::location const &loc, const string &message){
		std::cerr << "error at " << loc << ": " << message << std::endl;
	}
}