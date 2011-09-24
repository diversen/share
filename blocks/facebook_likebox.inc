<?php

include_model ('share');

function block_facebook_likebox () {
    templateView::includeModuleView('share', 'share_facebook_likebox', null);
}