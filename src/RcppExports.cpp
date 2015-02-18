// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "xml2_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// new_push_parser
XPtr<XmlPushParserPtr> new_push_parser(std::string filename);
RcppExport SEXP xml2_new_push_parser(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    __result = Rcpp::wrap(new_push_parser(filename));
    return __result;
END_RCPP
}
// feed_push_parser_text
bool feed_push_parser_text(XPtr<XmlPushParserPtr> x, const char* text, int size);
RcppExport SEXP xml2_feed_push_parser_text(SEXP xSEXP, SEXP textSEXP, SEXP sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<XmlPushParserPtr> >::type x(xSEXP);
    Rcpp::traits::input_parameter< const char* >::type text(textSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    __result = Rcpp::wrap(feed_push_parser_text(x, text, size));
    return __result;
END_RCPP
}
// feed_push_parser_raw
bool feed_push_parser_raw(XPtr<XmlPushParserPtr> x, SEXP data);
RcppExport SEXP xml2_feed_push_parser_raw(SEXP xSEXP, SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<XmlPushParserPtr> >::type x(xSEXP);
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    __result = Rcpp::wrap(feed_push_parser_raw(x, data));
    return __result;
END_RCPP
}
// close_push_parser
bool close_push_parser(XPtr<XmlPushParserPtr> x);
RcppExport SEXP xml2_close_push_parser(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<XmlPushParserPtr> >::type x(xSEXP);
    __result = Rcpp::wrap(close_push_parser(x));
    return __result;
END_RCPP
}
// get_push_parser_doc
XPtr<XmlDocPtr> get_push_parser_doc(XPtr<XmlPushParserPtr> x);
RcppExport SEXP xml2_get_push_parser_doc(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<XmlPushParserPtr> >::type x(xSEXP);
    __result = Rcpp::wrap(get_push_parser_doc(x));
    return __result;
END_RCPP
}
// doc_parse_file
XPtrDoc doc_parse_file(std::string path, std::string encoding = "", int options = 0, bool html = false);
RcppExport SEXP xml2_doc_parse_file(SEXP pathSEXP, SEXP encodingSEXP, SEXP optionsSEXP, SEXP htmlSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< std::string >::type encoding(encodingSEXP);
    Rcpp::traits::input_parameter< int >::type options(optionsSEXP);
    Rcpp::traits::input_parameter< bool >::type html(htmlSEXP);
    __result = Rcpp::wrap(doc_parse_file(path, encoding, options, html));
    return __result;
END_RCPP
}
// doc_parse_string
XPtrDoc doc_parse_string(CharacterVector x, std::string encoding, std::string base_url = "", int options = 0, bool html = false);
RcppExport SEXP xml2_doc_parse_string(SEXP xSEXP, SEXP encodingSEXP, SEXP base_urlSEXP, SEXP optionsSEXP, SEXP htmlSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type encoding(encodingSEXP);
    Rcpp::traits::input_parameter< std::string >::type base_url(base_urlSEXP);
    Rcpp::traits::input_parameter< int >::type options(optionsSEXP);
    Rcpp::traits::input_parameter< bool >::type html(htmlSEXP);
    __result = Rcpp::wrap(doc_parse_string(x, encoding, base_url, options, html));
    return __result;
END_RCPP
}
// doc_format
CharacterVector doc_format(XPtr<xmlDoc> x);
RcppExport SEXP xml2_doc_format(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<xmlDoc> >::type x(xSEXP);
    __result = Rcpp::wrap(doc_format(x));
    return __result;
END_RCPP
}
// doc_write
void doc_write(XPtr<xmlDoc> x, std::string path);
RcppExport SEXP xml2_doc_write(SEXP xSEXP, SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<xmlDoc> >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    doc_write(x, path);
    return R_NilValue;
END_RCPP
}
// doc_root
XPtrNode doc_root(XPtr<xmlDoc> x);
RcppExport SEXP xml2_doc_root(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<xmlDoc> >::type x(xSEXP);
    __result = Rcpp::wrap(doc_root(x));
    return __result;
END_RCPP
}
// node_name
CharacterVector node_name(XPtrNode node);
RcppExport SEXP xml2_node_name(SEXP nodeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    __result = Rcpp::wrap(node_name(node));
    return __result;
END_RCPP
}
// node_text
CharacterVector node_text(XPtrNode node);
RcppExport SEXP xml2_node_text(SEXP nodeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    __result = Rcpp::wrap(node_text(node));
    return __result;
END_RCPP
}
// node_attr
CharacterVector node_attr(XPtrNode node, std::string name);
RcppExport SEXP xml2_node_attr(SEXP nodeSEXP, SEXP nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< std::string >::type name(nameSEXP);
    __result = Rcpp::wrap(node_attr(node, name));
    return __result;
END_RCPP
}
// node_format
CharacterVector node_format(XPtrDoc doc, XPtrNode node, bool format = true, int indent = 0);
RcppExport SEXP xml2_node_format(SEXP docSEXP, SEXP nodeSEXP, SEXP formatSEXP, SEXP indentSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrDoc >::type doc(docSEXP);
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< bool >::type format(formatSEXP);
    Rcpp::traits::input_parameter< int >::type indent(indentSEXP);
    __result = Rcpp::wrap(node_format(doc, node, format, indent));
    return __result;
END_RCPP
}
// node_children
Rcpp::ListOf<XPtrNode> node_children(XPtrNode node);
RcppExport SEXP xml2_node_children(SEXP nodeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    __result = Rcpp::wrap(node_children(node));
    return __result;
END_RCPP
}
// node_write
void node_write(XPtrNode n, XPtrDoc d, std::string path);
RcppExport SEXP xml2_node_write(SEXP nSEXP, SEXP dSEXP, SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type n(nSEXP);
    Rcpp::traits::input_parameter< XPtrDoc >::type d(dSEXP);
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    node_write(n, d, path);
    return R_NilValue;
END_RCPP
}
