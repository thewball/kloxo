<?php 

$driver['hostdeny'] = "linux";
$driver['dns'] = array("none", "bind", "djbdns", "pdns", "nsd", "mydns", "yadifa");
$driver['spam'] = array("none", "bogofilter", "spamassassin");
$driver['mailinglist'] = "ezmlm";
$driver['ffile'] = "linux";
$driver['installapp'] = "linux";
$driver['allinstallapp'] = "linux";
$driver['pserver'] = "linux";
$driver['rubyrails'] = "linux";
$driver['uuser'] = "linux";
$driver['ftpuser'] = "pureftp";
$driver['web'] = array("none", "apache", "lighttpd", "nginx", "hiawatha", "openlitespeed", "monkey", "lighttpdproxy", "nginxproxy", "hiawathaproxy", "openlitespeedproxy", "monkeyproxy");
$driver['webcache'] = array("none", "varnish", "trafficserver", "squid");
$driver['mmail'] = array("qmail");
$driver['cron'] = "linux";
$driver['llog'] = "linux";
$driver['davuser'] = 'lighttpd';
$driver['sshconfig'] = 'linux';
