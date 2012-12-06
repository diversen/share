### About

simple share module for CosCMS

This is a share module - it provides sharing blocks, which needs to be enabled 
in your config/config.ini file. 

It also provides subModule methods, which makes it easy to attach to other 
modules. In order to make it work as a subModule you will need to enable it
in a main module. 

### Configuration

As a block module you can enable the following block in your config/config.ini
file: 

If you have container called 'blocks' you can enable the following blocks: 

    blocks[] = "/modules/share/blocks/facebook_likebox.inc"
    blocks[] = "/modules/share/blocks/facebook_share.inc"
    blocks[] = "/modules/share/blocks/google_plusone.inc"

These blocks can be manipulated on the web if you have the block_manip module 
installed. 

It also provides subModule actions through the `subModulePostContent` call. 
Here you can provide templates, but so far the only one is the stackoverflow
template which generates the same sharing options as a unanswered 
stackoverflow question. 

This has to be set in `share.ini` 

    share_template = 'stackoverflow'