<?php
$url = config::getSchemeWithServerName();
$url.= $vars['return_url'];

if (!isset($vars['entity']['abstract'])) {
    $abstract = $vars['entity']['title'];
}

$email_abstract = $abstract . "\n\n" . $url;

$url = rawurlencode($url);
$subject = rawurlencode($vars['entity']['title']);
$abstract = rawurlencode($abstract);
$email_abstract = rawurlencode($email_abstract);
?>    
<?= lang::translate('share_stack_text') ?> 
<a href="mailto:?subject=<?= $subject ?>&amp;body=<?= $email_abstract ?>">email</a>, 
<a href="https://plus.google.com/share?url=<?= $url ?>">Google+</a>,
<a href="http://twitter.com/share?url=<?= $url ?>&amp;text=<?= $abstract ?>">Twitter</a>,
<a href="http://www.facebook.com/sharer.php?u=<?= $url ?>&t=<?= $abstract ?>">Facebook</a>.
