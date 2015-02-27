<?php 

function block_facebook_likebox_js () { 
    $str = <<<EOF
<div
  class="fb-like"
  data-share="false"
  data-width="200"
  data-show-faces="false">
</div>
EOF;
    return $str;
}
